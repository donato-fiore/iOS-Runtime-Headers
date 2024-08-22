// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOGEOCODEREQUESTER_H
#define GEOGEOCODEREQUESTER_H



#import "GEOServiceRequester.h"

@interface GEOGeocodeRequester : GEOServiceRequester



+(id)sharedGeocodeRequester;
// -(void)batchReverseGeocode:(id)arg0 auditToken:(id)arg1 success:(id)arg2 networkActivity:(unk)arg3 error:(id)arg4  ;
-(void)cancelBatchReverseGeocode:(id)arg0 ;


@end


#endif