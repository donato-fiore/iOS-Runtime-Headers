// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRXBUTTON_H
#define PRXBUTTON_H

@class UIButton;



@interface PRXButton : UIButton

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSInteger proximityButtonType; // ivar: _proximityButtonType


+(id)buttonWithProximityType:(NSInteger)arg0 ;
+(id)buttonWithProximityType:(NSInteger)arg0 usesLegacyStyling:(BOOL)arg1 ;
-(CGFloat)_minimumIntrinsicHeight;
-(struct CGSize )intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)toggleActive;


@end


#endif