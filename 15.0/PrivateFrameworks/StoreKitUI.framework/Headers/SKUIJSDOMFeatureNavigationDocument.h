// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIJSDOMFEATURENAVIGATIONDOCUMENT_H
#define SKUIJSDOMFEATURENAVIGATIONDOCUMENT_H

@class IKJSNavigationDocument, NSMutableArray, IKAppContext, NSString;
@protocol IKAppNavigationController, SKUIDOMFeature;

#import <Foundation/Foundation.h>

#import "SKUINavigationDocumentController.h"

@interface SKUIJSDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, SKUIDOMFeature>

 {
    IKJSNavigationDocument *_jsNavigationDocument;
    NSMutableArray *_stackItems;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController; // ivar: _navigationDocumentController
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
+(id)possibleFeatureNames;
-(id)documents;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;
-(void)clear;
-(void)insertDocument:(id)arg0 beforeDocument:(id)arg1 options:(id)arg2 ;
-(void)popDocument;
-(void)popToDocument:(id)arg0 ;
-(void)popToRootDocument;
-(void)pushDocument:(id)arg0 options:(id)arg1 ;
-(void)removeDocument:(id)arg0 ;
-(void)replaceDocument:(id)arg0 withDocument:(id)arg1 options:(id)arg2 ;


@end


#endif