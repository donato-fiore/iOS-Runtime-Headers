// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKDIRECTIONALARROWRECOGNIZER_H
#define _MKDIRECTIONALARROWRECOGNIZER_H


#import <Foundation/Foundation.h>


@interface _MKDirectionalArrowRecognizer : NSObject {
    id *_target;
    SEL _action;
}


@property (readonly, nonatomic) NSInteger arrows; // ivar: _arrows
@property (readonly, nonatomic) NSInteger lastArrows; // ivar: _lastArrows
@property (nonatomic) NSInteger modifierFlags; // ivar: _modifierFlags
@property (nonatomic) NSInteger state; // ivar: _state


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)handleArrowMask:(NSInteger)arg0 ;
-(void)keyDown:(id)arg0 ;
-(void)keyUp:(id)arg0 ;


@end


#endif