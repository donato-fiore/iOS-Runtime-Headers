// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFCLGEOCODEROPERATION_H
#define OFCLGEOCODEROPERATION_H

@class CLGeocoder, CLLocation, NSArray;


#import "OFNSOperation.h"

@interface OFCLGeocoderOperation : OFNSOperation {
    CLGeocoder *_geocoder;
    CLLocation *_location;
    CGFloat _accuracy;
}


@property (retain) NSArray *placemarks; // ivar: _placemarks


+(CGFloat)recommendedAccuracy;
+(id)operationWithLocation:(id)arg0 ;
+(id)operationWithLocation:(id)arg0 accuracy:(CGFloat)arg1 ;
-(NSUInteger)launchOperation;
-(id)initWithLocation:(id)arg0 accuracy:(CGFloat)arg1 ;
-(void)cancelOperation;
-(void)cleanupOperation;
-(void)dealloc;
-(void)finishOperation;


@end


#endif