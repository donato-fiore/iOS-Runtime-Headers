// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RUIHEADERVIEW_H
#define RUIHEADERVIEW_H

@class UIView, UILabel, UIImageView, NSString, UIColor;
@protocol RUIHeader;


#import "RUILinkLabel.h"

@interface RUIHeaderView : UIView <RUIHeader>

 {
    UILabel *_navTitleLabel;
    UILabel *_navSubHeaderLabel;
    UILabel *_headerLabel;
    RUILinkLabel *_detailHeaderLabel;
    UILabel *_subHeaderLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    BOOL _isFirstSection;
    BOOL _customIconSize;
    BOOL _hasLargeIcon;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *headerLabelColor; // ivar: _headerLabelColor
@property (nonatomic) CGFloat imageLabelPadding; // ivar: _imageLabelPadding
@property (nonatomic) UIEdgeInsets margins; // ivar: _margins
@property (nonatomic) CGFloat subHeaderTopMarginValue; // ivar: _subHeaderTopMarginValue
@property (readonly) Class superclass;


-(BOOL)_hasIcon;
-(CGFloat)_headerOffsetInView:(id)arg0 ;
-(CGFloat)headerHeightForWidth:(CGFloat)arg0 inView:(id)arg1 ;
-(id)detailHeaderLabel;
-(id)headerLabel;
-(id)iconImage;
-(id)initWithAttributes:(id)arg0 ;
-(id)navSubHeaderLabel;
-(id)navTitleLabel;
-(id)subHeaderLabel;
-(void)layoutSubviews;
-(void)setDetailHeaderColor:(id)arg0 ;
-(void)setDetailText:(id)arg0 attributes:(id)arg1 ;
-(void)setHeaderAlignment:(NSInteger)arg0 ;
-(void)setHeaderColor:(id)arg0 ;
-(void)setHeaderMargin:(struct UIEdgeInsets )arg0 ;
-(void)setIconImage:(id)arg0 ;
-(void)setImageAlignment:(int)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)setNavSubHeaderTitle:(id)arg0 ;
-(void)setNavTitle:(id)arg0 ;
-(void)setSectionIsFirst:(BOOL)arg0 ;
-(void)setSubHeaderAlignment:(NSInteger)arg0 ;
-(void)setSubHeaderColor:(id)arg0 ;
-(void)setSubHeaderText:(id)arg0 attributes:(id)arg1 ;
-(void)setSubHeaderTopMargin:(CGFloat)arg0 ;
-(void)setText:(id)arg0 attributes:(id)arg1 ;


@end


#endif