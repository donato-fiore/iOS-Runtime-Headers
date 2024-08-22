// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMOVEEVENT_H
#define UIMOVEEVENT_H



#import "UIEvent.h"

@interface UIMoveEvent : UIEvent

@property (nonatomic, setter=_setFocusHeading:) NSUInteger _focusHeading; // ivar: _focusHeading
@property (nonatomic, setter=_setMoveDirection:) NSInteger _moveDirection; // ivar: _moveDirection


-(NSInteger)type;
-(void)_sendEventToResponder:(id)arg0 ;


@end


#endif