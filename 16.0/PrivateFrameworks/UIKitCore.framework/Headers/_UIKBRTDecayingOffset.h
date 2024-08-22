// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKBRTDECAYINGOFFSET_H
#define _UIKBRTDECAYINGOFFSET_H

@class UIKBRTDecayingObject;



@interface _UIKBRTDecayingOffset : UIKBRTDecayingObject {
    BOOL _limitMovement;
    CGPoint _offset;
}


@property (readonly, nonatomic) CGPoint offset;
@property (readonly, nonatomic) CGPoint originalOffset;


-(id)initWithTimeoutDuration:(CGFloat)arg0 limitMovement:(BOOL)arg1 ;
-(void)reset;
-(void)updateOffsetTo:(struct CGPoint )arg0 ;


@end


#endif