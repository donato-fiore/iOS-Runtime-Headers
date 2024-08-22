// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTDOWNTIMEVIEW_H
#define CNCONTACTDOWNTIMEVIEW_H

@class UIView, NSDictionary, UILabel, NSTextAttachment;



@interface CNContactDowntimeView : UIView

@property (copy, nonatomic) NSDictionary *ab_textAttributes; // ivar: _ab_textAttributes
@property (readonly, nonatomic) UILabel *downtimeLabel; // ivar: _downtimeLabel
@property (nonatomic) NSInteger elements; // ivar: _elements
@property (readonly, nonatomic) NSTextAttachment *imageAttachment; // ivar: _imageAttachment


+(id)lockImageAttachment;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)updateAttributedText;


@end


#endif