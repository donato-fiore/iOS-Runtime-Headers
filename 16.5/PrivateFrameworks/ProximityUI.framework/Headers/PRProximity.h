// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPROXIMITY_H
#define PRPROXIMITY_H


#import <Foundation/Foundation.h>


@interface PRProximity : NSObject

@property (readonly, nonatomic) float azimuth; // ivar: _azimuth
@property (readonly, nonatomic) BOOL azimuthIsValid; // ivar: _azimuthIsValid
@property (readonly, nonatomic) float elevation; // ivar: _elevation
@property (readonly, nonatomic) BOOL elevationIsValid; // ivar: _elevationIsValid
@property (readonly, nonatomic) float range; // ivar: _range
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithTime:(CGFloat)arg0 range:(float)arg1 ;
-(id)initWithTime:(CGFloat)arg0 range:(float)arg1 azimuth:(float)arg2 elevation:(float)arg3 ;
-(id)vector;


@end


#endif