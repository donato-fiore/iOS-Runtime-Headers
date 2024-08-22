// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPHYSICALCIRCLESTEMPLATEDOMFEATURE_H
#define SKUIPHYSICALCIRCLESTEMPLATEDOMFEATURE_H

@class NSMutableArray, IKAppContext, NSString;
@protocol SKUIDOMFeature, SKUIPhysicalCirclesTemplateDelegate;

#import <Foundation/Foundation.h>


@interface SKUIPhysicalCirclesTemplateDOMFeature : NSObject <SKUIDOMFeature>

 {
    NSMutableArray *_domUpdateBlocks;
    NSMutableArray *_pendingAnimationRequests;
}


@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIPhysicalCirclesTemplateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)makeFeatureJSObjectForFeature:(id)arg0 ;
-(id)initWithDOMNode:(id)arg0 featureName:(id)arg1 ;
-(id)popPendingAnimationRequests;
-(void)_addDOMUpdateBlock:(id)arg0 ;
-(void)_requestAnimation:(id)arg0 ;
-(void)finishDOMUpdates;


@end


#endif