// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUPNEXTHEADERVIEW_H
#define REUPNEXTHEADERVIEW_H

@class UICollectionReusableView, UILabel, NSAttributedString, UIColor;



@interface REUpNextHeaderView : UICollectionReusableView {
    UILabel *_label;
}


@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;


+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif