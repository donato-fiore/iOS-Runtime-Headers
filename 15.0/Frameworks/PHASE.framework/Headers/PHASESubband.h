// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASESUBBAND_H
#define PHASESUBBAND_H


#import <Foundation/Foundation.h>


@interface PHASESubband : NSObject

@property (readonly, nonatomic) float frequency; // ivar: _frequency
@property (readonly, nonatomic) float value; // ivar: _value


+(id)new;
-(id)init;
-(id)initWithFrequency:(float)arg0 value:(float)arg1 ;


@end


#endif