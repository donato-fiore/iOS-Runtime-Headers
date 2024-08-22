// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKHYBRIDMAPCONFIGURATION_H
#define MKHYBRIDMAPCONFIGURATION_H



#import "MKMapConfiguration.h"
#import "MKPointOfInterestFilter.h"

@interface MKHybridMapConfiguration : MKMapConfiguration

@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (nonatomic) BOOL showsTraffic; // ivar: _showsTraffic


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHybridMapConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElevationStyle:(NSInteger)arg0 ;
-(id)initWithLandscape:(NSInteger)arg0 ;
-(void)_addObserver:(id)arg0 options:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)_removeObserver:(id)arg0 context:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)inheritStateFromMapView:(id)arg0 ;
-(void)updateMapViewState:(id)arg0 ;


@end


#endif