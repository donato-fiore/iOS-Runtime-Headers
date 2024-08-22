// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSCACHEDGEOCODEROPERATION_H
#define CLSCACHEDGEOCODEROPERATION_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CLSLocationCache.h"

@interface CLSCachedGeocoderOperation : NSObject {
    BOOL _forceQuery;
    BOOL _cancelled;
    id *_location;
    CLSLocationCache *_locationCache;
    CGFloat _accuracy;
    NSObject<OS_dispatch_source> *_timer;
}




+(id)operationForceGeocoderWithLocation:(id)arg0 ;
+(id)operationForceGeocoderWithLocation:(id)arg0 withAccuracy:(CGFloat)arg1 ;
+(id)operationWithLocation:(id)arg0 ;
+(id)operationWithLocation:(id)arg0 withAccuracy:(CGFloat)arg1 ;
-(id)initWithLocation:(id)arg0 withAccuracy:(CGFloat)arg1 ;
-(id)performSynchronouslyWithError:(*id)arg0 ;
-(void)_executeQueryWithResultBlock:(id)arg0 ;
-(void)_returnsResultsForPlacemarks:(id)arg0 error:(id)arg1 resultBlock:(id)arg2 ;
-(void)_setupTimeOutForGeocoder:(id)arg0 resultBlock:(id)arg1 ;
-(void)_stopTimeOut;
-(void)_timedOutForGeocoder:(id)arg0 withResultBlock:(id)arg1 ;


@end


#endif