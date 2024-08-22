// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLGEOCODER_H
#define CLGEOCODER_H

@class CLSilo;

#import <Foundation/Foundation.h>

#import "CLGeocoderInternal.h"

@interface CLGeocoder : NSObject {
    CLGeocoderInternal *_internal;
}


@property (setter=_setResponseSilo:) CLSilo *_responseSilo;
@property (readonly, nonatomic, getter=isGeocoding) BOOL geocoding;


+(id)_timeZoneAtLocation:(id)arg0 ;
+(void)hydrateGeoMapItemLocallyFromHandle:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(void)_ensureMainThreadExecutionContextForBlock:(id)arg0 ;
-(void)_notifyCancel;
-(void)_notifyError:(id)arg0 ;
-(void)_notifyNoResult;
-(void)_notifyPartialResult:(id)arg0 ;
-(void)_notifyResult:(id)arg0 ;
-(void)_notifyResult:(id)arg0 error:(id)arg1 ;
-(void)_ticket:(id)arg0 didReturnError:(id)arg1 ;
-(void)_ticket:(id)arg0 didReturnError:(id)arg1 partialResultForLocation:(id)arg2 ;
-(void)_ticket:(id)arg0 didReturnGeoMapItems:(id)arg1 ;
-(void)cancelGeocode;
-(void)dealloc;
-(void)geocodeAddressDictionary:(id)arg0 completionHandler:(id)arg1 ;
-(void)geocodeAddressDictionary:(id)arg0 preferredLocale:(id)arg1 completionHandler:(id)arg2 ;
-(void)geocodeAddressString:(id)arg0 completionHandler:(id)arg1 ;
-(void)geocodeAddressString:(id)arg0 inRegion:(id)arg1 completionHandler:(id)arg2 ;
-(void)geocodeAddressString:(id)arg0 inRegion:(id)arg1 preferredLocale:(id)arg2 completionHandler:(id)arg3 ;
-(void)geocodePostalAddress:(id)arg0 completionHandler:(id)arg1 ;
-(void)geocodePostalAddress:(id)arg0 preferredLocale:(id)arg1 completionHandler:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg0 completionHandler:(id)arg1 ;
-(void)reverseGeocodeLocation:(id)arg0 heading:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg0 heading:(CGFloat)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)reverseGeocodeLocation:(id)arg0 localResultsOnly:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg0 preferredLocale:(id)arg1 completionHandler:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg0 preferredLocale:(id)arg1 heading:(CGFloat)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif