// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSERVER_H
#define ATXSERVER_H

@class NSString, NSXPCListener, NSMutableDictionary;
@protocol ATXClientXPCInterface, NSXPCListenerDelegate, OS_dispatch_queue, ATXPredictionContextBuilderProtocol;

#import <Foundation/Foundation.h>


@interface ATXServer : NSObject <ATXClientXPCInterface, NSXPCListenerDelegate>

 {
    NSString *_cacheFileBasePath;
    NSString *_machServiceName;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_cacheFileDescriptors;
    id<ATXPredictionContextBuilderProtocol> *_contextBuilder;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)consumerSubTypesToUpdate;
+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)syncGenerateNewAppPredictionsForConsumerSubType:(unsigned char)arg0 intent:(id)arg1 candidateBundleIdentifiers:(id)arg2 candidateIntentTypeIdentifiers:(id)arg3 featureCache:(id)arg4 ;
-(BOOL)updateAppPredictionsWithConsumerSubTypes:(id)arg0 featureCache:(id)arg1 ;
-(id)consumerSubTypesToUpdateWithRefreshRate:(CGFloat)arg0 disabledConsumerSubTypes:(id)arg1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)arg2 ;
-(id)init;
-(id)initWithCacheFileBasePath:(id)arg0 machServiceName:(id)arg1 predictionContextBuilder:(id)arg2 ;
-(void)dealloc;
-(void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg0 intent:(id)arg1 candidateBundleIdentifiers:(id)arg2 candidateIntentTypeIdentifiers:(id)arg3 featureCache:(id)arg4 reply:(id)arg5 ;
-(void)generateNewAppPredictionsForConsumerSubType:(unsigned char)arg0 intent:(id)arg1 candidateBundleIdentifiers:(id)arg2 candidateIntentTypeIdentifiers:(id)arg3 reply:(id)arg4 ;
-(void)getAppPredictorAssetMappingDescriptionWithReply:(id)arg0 ;
-(void)sendFeedbackForConsumerType:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 atxResponse:(id)arg2 engagementType:(NSUInteger)arg3 engagedBundleId:(id)arg4 bundleIdsShown:(id)arg5 explicitlyRejectedBundleIds:(id)arg6 reply:(id)arg7 ;
-(void)sortAppsByLaunches:(id)arg0 reply:(id)arg1 ;
-(void)updateBlendingLayerForAllConsumerSubTypes;


@end


#endif