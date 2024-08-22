// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOCATIONSHIFTER_H
#define GEOLOCATIONSHIFTER_H

@class NSMutableArray, NSCache, NSString;
@protocol GEOResourceManifestTileGroupObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver>

 {
    BOOL _isRequestingShiftFunction;
    os_unfair_lock_s _lock;
    NSMutableArray *_locationsToShift;
    NSCache *_shiftFunctionCache;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL locationShiftEnabled;
@property (readonly) Class superclass;


+(BOOL)isLocationShiftEnabled;
+(BOOL)isLocationShiftRequiredForCoordinate:(struct ? )arg0 ;
+(Class)proxyClass;
+(id)_proxy;
+(unsigned int)locationShiftFunctionVersion;
+(void)flushDiskCache;
+(void)setProxyClass:(Class)arg0 ;
-(BOOL)_shiftLocation:(id)arg0 ;
-(BOOL)shiftCoordinate:(struct ? )arg0 accuracy:(CGFloat)arg1 shiftedCoordinate:(struct ? *)arg2 shiftedAccuracy:(*CGFloat)arg3 ;
-(BOOL)shiftLatLng:(id)arg0 accuracy:(CGFloat)arg1 shiftedCoordinate:(struct ? *)arg2 shiftedAccuracy:(*CGFloat)arg3 ;
-(id)init;
-(void)_countryProvidersDidChange:(id)arg0 ;
-(void)_fetchShiftFunctionForLatLng:(id)arg0 auditToken:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_requestNextShiftFunctionIfNecessary;
-(void)_reset;
-(void)dealloc;
-(void)resourceManifestManager:(id)arg0 didChangeActiveTileGroup:(id)arg1 fromOldTileGroup:(id)arg2 ;
-(void)shiftCoordinate:(struct ? )arg0 accuracy:(CGFloat)arg1 withCompletionHandler:(id)arg2 ;
// -(void)shiftCoordinate:(struct ? )arg0 accuracy:(CGFloat)arg1 withCompletionHandler:(id)arg2 mustGoToNetworkCallback:(unk)arg3 errorHandler:(id)arg4 callbackQueue:(unk)arg5  ;
// -(void)shiftLatLng:(id)arg0 accuracy:(CGFloat)arg1 auditToken:(id)arg2 withCompletionHandler:(id)arg3 mustGoToNetworkCallback:(unk)arg4 errorHandler:(id)arg5 callbackQueue:(unk)arg6  ;
-(void)shiftLatLng:(id)arg0 accuracy:(CGFloat)arg1 withCompletionHandler:(id)arg2 ;
// -(void)shiftLatLng:(id)arg0 accuracy:(CGFloat)arg1 withCompletionHandler:(id)arg2 mustGoToNetworkCallback:(unk)arg3 errorHandler:(id)arg4 callbackQueue:(unk)arg5  ;


@end


#endif