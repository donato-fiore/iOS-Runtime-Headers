// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSKIPTILEBOUNDS_H
#define ARSKIPTILEBOUNDS_H


#import <Foundation/Foundation.h>


@interface ARSkipTileBounds : NSObject {
    CGFloat _minLatitude;
    CGFloat _maxLatitude;
    CGFloat _minLongitude;
    CGFloat _maxLongitude;
}




+(CGFloat)_normalizeLongitude:(CGFloat)arg0 ;
-(BOOL)isInside:(struct CLLocationCoordinate2D )arg0 ;
-(id)initWithCoordinate:(struct CLLocationCoordinate2D )arg0 ;


@end


#endif