// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPOIBUSYNESSHELPER_H
#define GEOPOIBUSYNESSHELPER_H


#import <Foundation/Foundation.h>


@interface GEOPOIBusynessHelper : NSObject



+(BOOL)_checkAvailablePOIForLocation:(id)arg0 radius:(int)arg1 minZoom:(unsigned char)arg2 maxZoom:(unsigned char)arg3 tiles:(id)arg4 error:(*id)arg5 ;
+(id)_generateDPPOIBusynessForCoordinate:(struct ? )arg0 tileId:(NSUInteger)arg1 dpBusynessTileURL:(id)arg2 dayOfWeek:(unsigned int)arg3 hourOfDay:(unsigned int)arg4 radii:(id)arg5 minZoom:(unsigned char)arg6 maxZoom:(unsigned char)arg7 tileIds:(id)arg8 error:(*id)arg9 ;
+(id)_generateDPPOIBusynessForLocation:(id)arg0 radii:(id)arg1 minZoom:(unsigned char)arg2 maxZoom:(unsigned char)arg3 dpBusynessTiles:(id)arg4 error:(*id)arg5 ;
+(id)dpClientVersionHashWithMCPOIBusynessVersion:(id)arg0 ;
+(void)checkIsEnabledForLocation:(id)arg0 radius:(int)arg1 workQueue:(id)arg2 result:(id)arg3 ;
+(void)generateDPPOIBusynessForLocation:(id)arg0 radii:(id)arg1 workQueue:(id)arg2 result:(id)arg3 ;
-(id)init;


@end


#endif