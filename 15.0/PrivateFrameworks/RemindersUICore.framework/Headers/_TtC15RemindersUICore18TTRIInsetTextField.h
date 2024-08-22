// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15REMINDERSUICORE18TTRIINSETTEXTFIELD_H
#define _TTC15REMINDERSUICORE18TTRIINSETTEXTFIELD_H

@class UITextField;



@interface _TtC15RemindersUICore18TTRIInsetTextField : UITextField

@property (nonatomic) CGFloat horizontalInset; // ivar: horizontalInset
@property (nonatomic) CGFloat verticalInset; // ivar: verticalInset


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;


@end


#endif