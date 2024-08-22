// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRESIZEPROGRESSSWITCHERMODIFIEREVENT_H
#define SBRESIZEPROGRESSSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"

@interface SBResizeProgressSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) CGFloat progress; // ivar: _progress


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProgress:(CGFloat)arg0 ;


@end


#endif