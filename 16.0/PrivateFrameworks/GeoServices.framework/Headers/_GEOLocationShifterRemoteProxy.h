// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOLOCATIONSHIFTERREMOTEPROXY_H
#define _GEOLOCATIONSHIFTERREMOTEPROXY_H

@class NSNumber, NSCache, NSString;
@protocol _GEOLocationShifterProxy, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _GEOLocationShifterRemoteProxy : NSObject <_GEOLocationShifterProxy>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_shiftingEnabled;
    NSNumber *_shiftingFxnVersion;
    NSCache *_shiftFunctionCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSCache *memoryCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;


-(BOOL)_isLocationShiftRequiredForCoordinateInProcess:(struct ? )arg0 ;
-(BOOL)_isLocationShiftRequiredForCoordinateViaProxy:(struct ? )arg0 ;
-(BOOL)isLocationShiftEnabled;
-(BOOL)isLocationShiftRequiredForCoordinate:(struct ? )arg0 ;
-(id)init;
-(unsigned int)locationShiftFunctionVersion;
-(void)flushDiskCache;
-(void)shiftLatLng:(id)arg0 auditToken:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif