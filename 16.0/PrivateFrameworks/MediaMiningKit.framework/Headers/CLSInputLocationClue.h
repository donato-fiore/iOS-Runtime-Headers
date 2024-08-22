// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSINPUTLOCATIONCLUE_H
#define CLSINPUTLOCATIONCLUE_H



#import "CLSInputClue.h"
#import "CLSPlace.h"

@interface CLSInputLocationClue : CLSInputClue {
    CLSPlace *_place;
}


@property (nonatomic) NSUInteger numberOfAssets; // ivar: numberOfAssets


+(id)clueWithLocation:(id)arg0 ;
+(id)cluesWithLocations:(id)arg0 ;
-(BOOL)isDefinite;
-(BOOL)isEqualToClue:(id)arg0 ;
-(CGFloat)gpsHorizontalAccuracy;
-(id)description;
-(id)location;
-(id)place;
-(id)placemark;
-(id)projectedLocation;
-(id)region;
-(id)regionInPlacemark;
-(struct CLLocationCoordinate2D )closestCoordinates;
-(void)_prepareWithProgressBlock:(id)arg0 ;
-(void)setPlace:(id)arg0 ;


@end


#endif