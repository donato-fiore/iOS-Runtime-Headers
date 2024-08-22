// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERAPPLICATIONBASIC_H
#define MTRBASECLUSTERAPPLICATIONBASIC_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterApplicationBasic : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAllowedVendorListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAllowedVendorListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeApplicationNameWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeApplicationNameWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeApplicationVersionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeApplicationVersionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeApplicationWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeApplicationWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeProductIDWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeProductIDWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeStatusWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStatusWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeVendorIDWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeVendorIDWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeVendorNameWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeVendorNameWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAllowedVendorListWithCompletion:(id)arg0 ;
-(void)readAttributeAllowedVendorListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeApplicationNameWithCompletion:(id)arg0 ;
-(void)readAttributeApplicationNameWithCompletionHandler:(id)arg0 ;
-(void)readAttributeApplicationVersionWithCompletion:(id)arg0 ;
-(void)readAttributeApplicationVersionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeApplicationWithCompletion:(id)arg0 ;
-(void)readAttributeApplicationWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeProductIDWithCompletion:(id)arg0 ;
-(void)readAttributeProductIDWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStatusWithCompletion:(id)arg0 ;
-(void)readAttributeStatusWithCompletionHandler:(id)arg0 ;
-(void)readAttributeVendorIDWithCompletion:(id)arg0 ;
-(void)readAttributeVendorIDWithCompletionHandler:(id)arg0 ;
-(void)readAttributeVendorNameWithCompletion:(id)arg0 ;
-(void)readAttributeVendorNameWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAllowedVendorListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAllowedVendorListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeApplicationNameWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeApplicationNameWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeApplicationVersionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeApplicationVersionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeApplicationWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeApplicationWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeProductIDWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeProductIDWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeStatusWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStatusWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeVendorIDWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeVendorIDWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeVendorNameWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeVendorNameWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;


@end


#endif