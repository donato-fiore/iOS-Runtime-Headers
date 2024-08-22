// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMFEATURENAVIGATIONDOCUMENT_H
#define IKDOMFEATURENAVIGATIONDOCUMENT_H

@class NSMutableArray, NSString;
@protocol IKAppNavigationController, IKDOMFeature;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"

@interface IKDOMFeatureNavigationDocument : NSObject <IKAppNavigationController, IKDOMFeature>

 {
    id<IKAppNavigationController> *_appNavigationController;
    NSMutableArray *_stackItems;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<IKAppNavigationController> *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
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