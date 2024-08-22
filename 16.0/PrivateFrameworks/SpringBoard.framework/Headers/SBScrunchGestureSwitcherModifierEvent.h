// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCRUNCHGESTURESWITCHERMODIFIEREVENT_H
#define SBSCRUNCHGESTURESWITCHERMODIFIEREVENT_H



#import "SBGestureSwitcherModifierEvent.h"

@interface SBScrunchGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) CGFloat absoluteScale; // ivar: _absoluteScale
@property (nonatomic) CGPoint centroid; // ivar: _centroid
@property (nonatomic) CGPoint initialCentroid; // ivar: _initialCentroid
@property (nonatomic) CGPoint translationWithoutScale; // ivar: _translationWithoutScale


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif