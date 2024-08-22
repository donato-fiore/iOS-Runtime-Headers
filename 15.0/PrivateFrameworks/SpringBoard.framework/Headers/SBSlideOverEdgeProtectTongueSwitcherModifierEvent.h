// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSLIDEOVEREDGEPROTECTTONGUESWITCHERMODIFIEREVENT_H
#define SBSLIDEOVEREDGEPROTECTTONGUESWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"

@interface SBSlideOverEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSUInteger edge; // ivar: _edge
@property (readonly, nonatomic, getter=isTonguePresented) BOOL tonguePresented; // ivar: _tonguePresented


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTonguePresented:(BOOL)arg0 edge:(NSUInteger)arg1 ;


@end


#endif