// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSQUERYCHOPPER_H
#define BCSQUERYCHOPPER_H

@class NSString;
@protocol BCSQueryChopperProtocol, OS_dispatch_queue, BCSMetricFactoryProtocol;

#import <Foundation/Foundation.h>


@interface BCSQueryChopper : NSObject <BCSQueryChopperProtocol>

 {
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id<BCSMetricFactoryProtocol> *_metricFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)queryChopperDelegate:(id)arg0 fetchLinkItemModelWithURL:(id)arg1 isBloomFilterCached:(BOOL)arg2 forClientBundleID:(id)arg3 metric:(id)arg4 completion:(id)arg5 ;
-(void)queryChopperDelegate:(id)arg0 isBusinessRegisteredForURL:(id)arg1 isBloomFilterCached:(BOOL)arg2 forClientBundleID:(id)arg3 metric:(id)arg4 completion:(id)arg5 ;


@end


#endif