// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTEXTBANNERVIEW_H
#define PXTEXTBANNERVIEW_H

@class UIView, UIImageView, UILabel, NSString;



@interface PXTextBannerView : UIView {
    UIImageView *_backgroundView;
    UILabel *_textLabel;
}


@property (nonatomic, getter=isDestructiveText) BOOL destructiveText; // ivar: _destructiveText
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateSubviews;
-(void)layoutSubviews;


@end


#endif