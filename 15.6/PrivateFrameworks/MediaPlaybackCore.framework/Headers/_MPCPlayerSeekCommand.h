// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPCPLAYERSEEKCOMMAND_H
#define _MPCPLAYERSEEKCOMMAND_H

@class MPCPlayerItemCommand, NSString, NSArray;
@protocol MPCPlayerSeekCommand;



@interface _MPCPlayerSeekCommand : MPCPlayerItemCommand <MPCPlayerSeekCommand>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *preferredBackwardJumpIntervals; // ivar: _preferredBackwardJumpIntervals
@property (copy, nonatomic) NSArray *preferredForwardJumpIntervals; // ivar: _preferredForwardJumpIntervals
@property (nonatomic) BOOL prefersNegativeBackwardSkipIntervals; // ivar: _prefersNegativeBackwardSkipIntervals
@property (readonly, nonatomic) NSUInteger seekSupport; // ivar: _seekSupport
@property (readonly) Class superclass;


-(id)_seekCommandWithMediaRemoteCommand:(unsigned int)arg0 options:(id)arg1 ;
-(id)beginSeekWithDirection:(NSInteger)arg0 ;
-(id)changePositionToElapsedInterval:(CGFloat)arg0 ;
-(id)endSeek;
-(id)initWithResponse:(id)arg0 seekSupport:(NSUInteger)arg1 ;
-(id)jumpByInterval:(CGFloat)arg0 ;


@end


#endif