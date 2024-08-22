// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKREVERSEGEOCODER_H
#define MKREVERSEGEOCODER_H

@protocol MKReverseGeocoderDelegate;

#import <Foundation/Foundation.h>

#import "MKReverseGeocoderInternal.h"
#import "MKPlacemark.h"

@interface MKReverseGeocoder : NSObject {
    MKReverseGeocoderInternal *_internal;
}


@property (readonly, nonatomic) CLLocationCoordinate2D coordinate;
@property (weak, nonatomic) NSObject<MKReverseGeocoderDelegate> *delegate;
@property (readonly, nonatomic) MKPlacemark *placemark;
@property (readonly, nonatomic, getter=isQuerying) BOOL querying;


-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)_notifyError:(id)arg0 ;
-(void)_notifyNoResults;
-(void)_notifyResult:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif