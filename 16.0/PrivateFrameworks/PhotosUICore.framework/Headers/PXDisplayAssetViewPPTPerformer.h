// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETVIEWPPTPERFORMER_H
#define PXDISPLAYASSETVIEWPPTPERFORMER_H

@class NSString, NSDictionary;
@protocol PXAnonymousView, PXPPTDelegate;

#import <Foundation/Foundation.h>


@interface PXDisplayAssetViewPPTPerformer : NSObject

@property (readonly, nonatomic) NSObject<PXAnonymousView> *containerView; // ivar: _containerView
@property (readonly, weak, nonatomic) NSObject<PXPPTDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSInteger testIterations; // ivar: _testIterations
@property (readonly, nonatomic) NSString *testName; // ivar: _testName
@property (readonly, nonatomic) NSDictionary *testOptions; // ivar: _testOptions


-(id)init;
-(id)initWithContainerView:(id)arg0 delegate:(id)arg1 testOptions:(id)arg2 ;
-(void)_createAssetViewWithConfiguration:(id)arg0 resultHandler:(id)arg1 ;
-(void)_runScrubbingSubtestWithAssetView:(id)arg0 configuration:(id)arg1 completionHandler:(id)arg2 ;
// -(void)_runSubtestWithName:(id)arg0 metrics:(id)arg1 configuration:(id)arg2 usingBlock:(id)arg3 completionHandler:(unk)arg4  ;
// -(void)_runTestUsingBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_tearDownAssetView:(id)arg0 completionHandler:(id)arg1 ;
-(void)runLocalizedTitleTestWithConfigurations:(id)arg0 completionHandler:(id)arg1 ;
-(void)runScrubbingTestWithConfigurations:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif