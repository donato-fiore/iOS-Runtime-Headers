// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIJSAPPLICATION_H
#define SKUIJSAPPLICATION_H

@class IKJSApplication;
@protocol SKUIJSApplication;


#import "SKUIApplicationController.h"

@interface SKUIJSApplication : IKJSApplication <SKUIJSApplication>



@property (readonly, weak, nonatomic) SKUIApplicationController *applicationController; // ivar: _applicationController
@property (readonly) BOOL isRunningTests;
@property (readonly, nonatomic) BOOL pageRenderMetricsEnabled;


-(id)initWithAppContext:(id)arg0 applicationController:(id)arg1 ;
-(void)launchComplete:(id)arg0 ;
-(void)launchFailed;
-(void)sendDocumentMessage:(id)arg0 ;


@end


#endif