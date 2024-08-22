// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFSECUREMIMEPERSONHEADERLABEL_H
#define _MFSECUREMIMEPERSONHEADERLABEL_H

@class UIView, UIImageView, UILabel, NSString;



@interface _MFSecureMIMEPersonHeaderLabel : UIView {
    UIImageView *_imageView;
    UILabel *_label;
}


@property (copy, nonatomic) NSString *text;


-(id)initWithImage:(id)arg0 text:(id)arg1 textColor:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif