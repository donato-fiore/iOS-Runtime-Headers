// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBEATTOBEATINSTANTANEOUSBPM_H
#define HKBEATTOBEATINSTANTANEOUSBPM_H


#import <Foundation/Foundation.h>


@interface HKBeatToBeatInstantaneousBPM : NSObject

@property (readonly, nonatomic) CGFloat bpm; // ivar: _bpm
@property (readonly, nonatomic) CGFloat time; // ivar: _time


-(id)initWithBPM:(CGFloat)arg0 time:(CGFloat)arg1 ;


@end


#endif