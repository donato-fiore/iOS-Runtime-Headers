// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITOVERLAYBADGE_H
#define PUPHOTOEDITOVERLAYBADGE_H

@class UIView, UILabel, NSString;



@interface PUPhotoEditOverlayBadge : UIView

@property (readonly, nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (readonly, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLabel;


@end


#endif