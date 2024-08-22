// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEDUCKER_H
#define PHASEDUCKER_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEDucker : NSObject {
    PHASEEngine *_engine;
    NSSet *_sourceGroups;
    NSSet *_targetGroups;
    BOOL _active;
}


@property (readonly, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSInteger attackCurve; // ivar: _attackCurve
@property (readonly, nonatomic) CGFloat attackTime; // ivar: _attackTime
@property (readonly, nonatomic) CGFloat gain; // ivar: _gain
@property (readonly, nonatomic) CGFloat gainHighFrequency; // ivar: _gainHighFrequency
@property (readonly, nonatomic) CGFloat gainLowFrequency; // ivar: _gainLowFrequency
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger releaseCurve; // ivar: _releaseCurve
@property (readonly, nonatomic) CGFloat releaseTime; // ivar: _releaseTime
@property (readonly, copy, nonatomic) NSSet *sourceGroups;
@property (readonly, copy, nonatomic) NSSet *targetGroups;
@property (readonly, nonatomic) NSString *uid; // ivar: _uid


+(id)new;
-(id)init;
-(id)initWithEngine:(id)arg0 sourceGroups:(id)arg1 targetGroups:(id)arg2 gain:(CGFloat)arg3 attackTime:(CGFloat)arg4 releaseTime:(CGFloat)arg5 attackCurve:(NSInteger)arg6 releaseCurve:(NSInteger)arg7 ;
-(id)initWithEngine:(id)arg0 sourceGroups:(id)arg1 targetGroups:(id)arg2 gain:(CGFloat)arg3 gainHighFrequency:(CGFloat)arg4 gainLowFrequency:(CGFloat)arg5 attackTime:(CGFloat)arg6 releaseTime:(CGFloat)arg7 attackCurve:(NSInteger)arg8 releaseCurve:(NSInteger)arg9 ;
-(id)initWithEngine:(id)arg0 sourceGroups:(id)arg1 targetGroups:(id)arg2 gain:(CGFloat)arg3 lowFrequencyGain:(CGFloat)arg4 highFrequencyGain:(CGFloat)arg5 attackTime:(CGFloat)arg6 releaseTime:(CGFloat)arg7 attackCurve:(NSInteger)arg8 releaseCurve:(NSInteger)arg9 ;
-(void)activate;
-(void)deactivate;


@end


#endif