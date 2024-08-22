// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSLOCATIONSTRINGCELL_H
#define CKDETAILSLOCATIONSTRINGCELL_H

@class UIView, UIVisualEffectView, UIImageView, UILabel, NSString;



@interface CKDetailsLocationStringCell : UIView

@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (retain, nonatomic) UIImageView *locationImageView; // ivar: _locationImageView
@property (retain, nonatomic) UILabel *locationLabel; // ivar: _locationLabel
@property (retain, nonatomic) NSString *locationString; // ivar: _locationString


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif