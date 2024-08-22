// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ASINSETTEXTFIELD_H
#define _ASINSETTEXTFIELD_H

@class UITextField;



@interface _ASInsetTextField : UITextField

@property (nonatomic) CGSize insetSize; // ivar: _insetSize


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )leftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;


@end


#endif