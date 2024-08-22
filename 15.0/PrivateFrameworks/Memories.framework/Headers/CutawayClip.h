// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUTAWAYCLIP_H
#define CUTAWAYCLIP_H

@class NSString;


#import "MovieClip.h"

@interface CutawayClip : MovieClip

@property (readonly, nonatomic) int animateInDuration;
@property (readonly, nonatomic) int animateOutDuration;
@property (nonatomic) int cutawayDirection;
@property (retain, nonatomic) NSString *cutawayName;
@property (nonatomic) CGPoint cutawayOffset;
@property (nonatomic) int cutawayType;
@property (nonatomic) int forcedDuration; // ivar: forcedDuration
@property (nonatomic) BOOL forcedNoFadeIn; // ivar: forcedNoFadeIn
@property (nonatomic) BOOL forcedNoFadeOut; // ivar: forcedNoFadeOut
@property (nonatomic) CGRect pipRect;
@property (readonly, nonatomic) CGRect pipRectWithAspectRatio;
@property (nonatomic) BOOL startOffsetValidated; // ivar: startOffsetValidated
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CGPoint underlayOffset;


+(id)cutawayWithClip:(id)arg0 type:(int)arg1 ;
-(CGFloat)aspectRatio;
-(float)clipValue:(float)arg0 toMax:(float)arg1 ;
-(float)maxTranslateX;
-(float)maxTranslateY;
-(float)scaleFactor;
-(float)translateX;
-(float)translateY;
-(int)clipType;
-(int)duration;
-(int)startOffset;
-(struct CGRect )defaultPIPRect;
-(struct CGRect )rectInRect:(struct CGRect )arg0 ;
-(void)didFinishTrimming;
-(void)setStartOffset:(int)arg0 ;


@end


#endif