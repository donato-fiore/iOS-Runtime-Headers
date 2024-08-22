// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCARETOPTIONALTEXTFIELD_H
#define HKCARETOPTIONALTEXTFIELD_H

@class UITextField;



@interface HKCaretOptionalTextField : UITextField

@property (nonatomic) BOOL allowsSelection; // ivar: _allowsSelection
@property (nonatomic) BOOL disableActions; // ivar: _disableActions


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(CGFloat)actualMinimumFontSize;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;


@end


#endif