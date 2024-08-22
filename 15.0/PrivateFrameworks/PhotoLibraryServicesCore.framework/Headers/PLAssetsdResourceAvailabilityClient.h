// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDRESOURCEAVAILABILITYCLIENT_H
#define PLASSETSDRESOURCEAVAILABILITYCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdResourceAvailabilityClient : PLAssetsdBaseClient



-(id)sendMakeResourceAvailableRequest:(id)arg0 reply:(id)arg1 ;
-(id)sendResourceRepairRequest:(id)arg0 errorCodes:(id)arg1 reply:(id)arg2 ;
-(id)sendVideoRequest:(id)arg0 reply:(id)arg1 ;
-(void)sendMakeResourceUnavailableRequest:(id)arg0 ;
-(void)setSharedMemoryForCacheMetricsCollector:(id)arg0 ;


@end


#endif