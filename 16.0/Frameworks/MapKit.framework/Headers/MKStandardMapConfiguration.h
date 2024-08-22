// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKSTANDARDMAPCONFIGURATION_H
#define MKSTANDARDMAPCONFIGURATION_H



#import "MKMapConfiguration.h"
#import "MKPointOfInterestFilter.h"

@interface MKStandardMapConfiguration : MKMapConfiguration

@property (nonatomic) BOOL _forcesModernMap; // ivar: __forcesModernMap
@property (readonly, nonatomic, getter=_allowsTerrainModeUpdates) BOOL allowsTerrainModeUpdates;
@property (nonatomic) NSInteger emphasisStyle; // ivar: _emphasisStyle
@property (nonatomic) NSInteger mode;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (nonatomic) BOOL showsBuildings; // ivar: _showsBuildings
@property (nonatomic) BOOL showsTraffic; // ivar: _showsTraffic


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStandardMapConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElevationStyle:(NSInteger)arg0 ;
-(id)initWithElevationStyle:(NSInteger)arg0 emphasisStyle:(NSInteger)arg1 ;
-(id)initWithEmphasisStyle:(NSInteger)arg0 ;
-(id)initWithMapMode:(NSInteger)arg0 ;
-(id)initWithMapMode:(NSInteger)arg0 elevationStyle:(NSInteger)arg1 ;
-(id)initWithMapMode:(NSInteger)arg0 landscape:(NSInteger)arg1 ;
-(void)_addObserver:(id)arg0 options:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)_removeObserver:(id)arg0 context:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)inheritStateFromMapView:(id)arg0 ;
-(void)updateMapViewState:(id)arg0 ;


@end


#endif