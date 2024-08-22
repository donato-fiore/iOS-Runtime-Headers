// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KEYPITCH_H
#define KEYPITCH_H


#import <Foundation/Foundation.h>


@interface KeyPitch : NSObject

@property (nonatomic) CGFloat frequency; // ivar: _frequency
@property (nonatomic) CGFloat timeOffsetMS; // ivar: _timeOffsetMS
@property (nonatomic) CGFloat volume; // ivar: _volume


-(id)description;
-(id)initWithFrequency:(CGFloat)arg0 volume:(CGFloat)arg1 timeOffset:(CGFloat)arg2 ;


@end


#endif