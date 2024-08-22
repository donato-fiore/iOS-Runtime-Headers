// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBPRESSSEQUENCEVALIDATOR_H
#define SBPRESSSEQUENCEVALIDATOR_H


#import <Foundation/Foundation.h>

#import "SBPressSequenceSettings.h"

@interface SBPressSequenceValidator : NSObject

@property (readonly, nonatomic) SBPressSequenceSettings *settings; // ivar: _settings


-(BOOL)pressEventIsValidInSequence:(id)arg0 endingDownEvent:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(CGFloat)timeUntilNextPressEventIsInValidInSequence:(id)arg0 lastPressEventInSequenceIsDown:(BOOL)arg1 ;
-(NSInteger)_modeForDesiredIndex:(NSUInteger)arg0 isDownEvent:(BOOL)arg1 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(struct _SBPressSequenceValidatorBounds )_pressDownBoundsForDesiredIndex:(NSUInteger)arg0 sequence:(id)arg1 ;
-(struct _SBPressSequenceValidatorBounds )_pressUpBoundsForDesiredIndex:(NSUInteger)arg0 sequence:(id)arg1 ;


@end


#endif