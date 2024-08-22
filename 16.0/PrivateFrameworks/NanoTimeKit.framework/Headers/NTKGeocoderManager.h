// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGEOCODERMANAGER_H
#define NTKGEOCODERMANAGER_H

@class CLGeocoder, CLLocation, CLPlacemark, CLInUseAssertion, NSMutableArray;

#import <Foundation/Foundation.h>


@interface NTKGeocoderManager : NSObject {
    CLGeocoder *_geocoder;
    CLLocation *_cachedLocation;
    CLPlacemark *_cachedPlacemark;
    CLInUseAssertion *_locationInUseAssertion;
    NSMutableArray *_handlers;
}




+(id)sharedManager;
-(id)cachedPlacemarkForLocation:(id)arg0 ;
-(id)init;
-(void)_handlePlacemarks:(id)arg0 fromLocation:(id)arg1 error:(id)arg2 ;
-(void)placemarkForLocation:(id)arg0 handler:(id)arg1 ;


@end


#endif