// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDIALOGTEXTFIELD_H
#define SFDIALOGTEXTFIELD_H

@class UITextField;



@interface SFDialogTextField : UITextField

@property (nonatomic) NSUInteger stackPosition; // ivar: _stackPosition


-(id)_placeholderColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif