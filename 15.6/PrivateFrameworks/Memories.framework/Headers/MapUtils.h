// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPUTILS_H
#define MAPUTILS_H


#import <Foundation/Foundation.h>


@interface MapUtils : NSObject



+(float)bestEndingLongitude:(float)arg0 forShortestTripFromLongitude:(float)arg1 ;
+(id)locationWithImageURL:(id)arg0 ;
+(struct CGPoint )pixelFromLatitude:(float)arg0 longitude:(float)arg1 onEquirectangularMapWithSize:(struct CGSize )arg2 geographicBounds:(struct CGRect )arg3 ;
+(struct CGRect )geographicRectFromPixelRect:(struct CGRect )arg0 onEquirectangularMapWithSize:(struct CGSize )arg1 geographicBounds:(struct CGRect )arg2 ;


@end


#endif