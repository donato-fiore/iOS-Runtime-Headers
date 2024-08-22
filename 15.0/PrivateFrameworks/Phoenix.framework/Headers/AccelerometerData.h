// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCELEROMETERDATA_H
#define ACCELEROMETERDATA_H


#import <Foundation/Foundation.h>


@interface AccelerometerData : NSObject

@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y
@property (nonatomic) CGFloat z; // ivar: _z


-(id)description;
-(id)initWithData:(struct ? )arg0 timestamp:(CGFloat)arg1 ;


@end


#endif