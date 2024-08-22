// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPMENUBARDOCUMENT_H
#define IKAPPMENUBARDOCUMENT_H

@class NSMutableDictionary, NSString;
@protocol IKJSMenuBarDocumentAppBridge, IKDOMFeature, NSCopying, IKAppMenuBarDocumentDelegate;

#import <Foundation/Foundation.h>

#import "IKDOMNode.h"
#import "IKAppContext.h"
#import "IKViewElement.h"

@interface IKAppMenuBarDocument : NSObject <IKJSMenuBarDocumentAppBridge, IKDOMFeature>

 {
    IKDOMNode *_parentDOMNode;
    NSMutableDictionary *_jsDocumentsByEntityUniqueIdentifier;
    NSMutableDictionary *_documentsByEntityUniqueIdentifier;
    NSMutableDictionary *_documentOptionsByEntityUniqueIdentifier;
    id<NSCopying> *_selectedEntityUniqueIdentifier;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IKAppMenuBarDocumentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) IKViewElement *menuBarElement; // ivar: _menuBarElement
@property (retain, nonatomic) IKViewElement *selectedMenuItem;
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
-(id)_menuItemElementForEntityUniqueIdentifier:(id)arg0 ;
-(id)documentForEntityUniqueIdentifier:(id)arg0 ;
-(id)documentForMenuItem:(id)arg0 ;
-(id)documentOptionsForEntityUniqueIdentifier:(id)arg0 ;
-(id)documentOptionsForMenuItem:(id)arg0 ;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;
-(id)jsMenuBarDocument:(id)arg0 documentForEntityUniqueIdentifier:(id)arg1 ;
-(id)selectedItemForJsMenuBarDocument:(id)arg0 ;
-(void)_evaluateDelegateBlockSync:(id)arg0 ;
-(void)jsMenuBarDocument:(id)arg0 setDocument:(id)arg1 forEntityUniqueIdentifier:(id)arg2 withOptions:(id)arg3 ;
-(void)jsMenuBarDocument:(id)arg0 setSelectedEntityUniqueIdentifier:(id)arg1 withOptions:(id)arg2 ;
-(void)migrateToViewElement:(id)arg0 ;


@end


#endif