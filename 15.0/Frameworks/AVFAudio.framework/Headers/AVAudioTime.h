// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAUDIOTIME_H
#define AVAUDIOTIME_H


#import <Foundation/Foundation.h>


@interface AVAudioTime : NSObject {
    AudioTimeStamp _ats;
    CGFloat _sampleRate;
    *void _reserved;
}


@property (readonly, nonatomic) AudioTimeStamp audioTimeStamp;
@property (readonly, nonatomic) NSUInteger hostTime;
@property (readonly, nonatomic, getter=isHostTimeValid) BOOL hostTimeValid;
@property (readonly, nonatomic) CGFloat sampleRate;
@property (readonly, nonatomic) NSInteger sampleTime;
@property (readonly, nonatomic, getter=isSampleTimeValid) BOOL sampleTimeValid;


+(CGFloat)secondsForHostTime:(NSUInteger)arg0 ;
+(NSUInteger)hostTimeForSeconds:(CGFloat)arg0 ;
+(id)timeWithAudioTimeStamp:(struct AudioTimeStamp *)arg0 sampleRate:(CGFloat)arg1 ;
+(id)timeWithHostTime:(NSUInteger)arg0 ;
+(id)timeWithHostTime:(NSUInteger)arg0 sampleTime:(NSInteger)arg1 atRate:(CGFloat)arg2 ;
+(id)timeWithSampleTime:(NSInteger)arg0 atRate:(CGFloat)arg1 ;
-(id)description;
-(id)extrapolateTimeFromAnchor:(id)arg0 ;
-(id)init;
-(id)initWithAudioTimeStamp:(struct AudioTimeStamp *)arg0 sampleRate:(CGFloat)arg1 ;
-(id)initWithHostTime:(NSUInteger)arg0 ;
-(id)initWithHostTime:(NSUInteger)arg0 sampleTime:(NSInteger)arg1 atRate:(CGFloat)arg2 ;
-(id)initWithSampleTime:(NSInteger)arg0 atRate:(CGFloat)arg1 ;


@end


#endif