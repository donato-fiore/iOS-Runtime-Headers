// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSESTRIPEDGEPROTECTTONGUESWITCHERMODIFIEREVENT_H
#define SBCONTINUOUSEXPOSESTRIPEDGEPROTECTTONGUESWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"

@interface SBContinuousExposeStripEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic, getter=isTonguePresented) BOOL tonguePresented; // ivar: _tonguePresented


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTonguePresented:(BOOL)arg0 ;


@end


#endif