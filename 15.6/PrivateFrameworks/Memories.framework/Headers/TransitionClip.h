// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSITIONCLIP_H
#define TRANSITIONCLIP_H

@class NSDictionary, NSString;


#import "KonaClip.h"

@interface TransitionClip : KonaClip

@property (nonatomic) int audioEnabledType;
@property (readonly, nonatomic) ? effectRange;
@property (nonatomic) float effectRangeBias;
@property (nonatomic) BOOL forcedNoOverlap; // ivar: _forcedNoOverlap
@property (readonly, nonatomic) int overlapType;
@property (nonatomic) int transitionDirection;
@property (copy, nonatomic) NSDictionary *transitionEffectSettings; // ivar: _transitionEffectSettings
@property (retain, nonatomic) NSString *transitionName;
@property (nonatomic) int type;


+(int)overlapTypeForName:(id)arg0 ;
-(BOOL)audioEnabled;
-(BOOL)overlapIsCurrentlyForced;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(id)transitionIDFromName:(id)arg0 ;
-(int)biasedDuration;
-(int)biasedStartOffset;
-(int)clipType;
-(int)transitionEatLeft;
-(int)transitionEatRight;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)setTransitionEatLeft:(int)arg0 ;
-(void)setTransitionEatRight:(int)arg0 ;


@end


#endif