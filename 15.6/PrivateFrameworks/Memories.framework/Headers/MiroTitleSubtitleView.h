// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROTITLESUBTITLEVIEW_H
#define MIROTITLESUBTITLEVIEW_H

@class UIView, NSLayoutConstraint, NSString, UILabel;



@interface MiroTitleSubtitleView : UIView

@property (retain, nonatomic) NSLayoutConstraint *subtitleCenterXConstraint; // ivar: _subtitleCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *subtitleCenterYConstraint; // ivar: _subtitleCenterYConstraint
@property (retain, nonatomic) NSString *subtitleFontName; // ivar: _subtitleFontName
@property (nonatomic) CGFloat subtitleFontSize; // ivar: _subtitleFontSize
@property (retain, nonatomic) NSLayoutConstraint *subtitleHeightConstraint; // ivar: _subtitleHeightConstraint
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (nonatomic) BOOL subtitleShouldCapitalize; // ivar: _subtitleShouldCapitalize
@property (nonatomic) CGFloat subtitleSpaceTracking; // ivar: _subtitleSpaceTracking
@property (nonatomic) CGFloat subtitleStroke; // ivar: _subtitleStroke
@property (retain, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (nonatomic) CGFloat subtitleTracking; // ivar: _subtitleTracking
@property (retain, nonatomic) NSLayoutConstraint *subtitleWidthConstraint; // ivar: _subtitleWidthConstraint
@property (nonatomic) CGFloat titleBaselineDistance; // ivar: _titleBaselineDistance
@property (retain, nonatomic) NSLayoutConstraint *titleCenterXConstraint; // ivar: _titleCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *titleCenterYConstraint; // ivar: _titleCenterYConstraint
@property (retain, nonatomic) NSString *titleFontName; // ivar: _titleFontName
@property (nonatomic) CGFloat titleFontSize; // ivar: _titleFontSize
@property (retain, nonatomic) NSLayoutConstraint *titleHeightConstraint; // ivar: _titleHeightConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat titleOffset; // ivar: _titleOffset
@property (nonatomic) CGFloat titleScale; // ivar: _titleScale
@property (nonatomic) BOOL titleShouldCapitalize; // ivar: _titleShouldCapitalize
@property (nonatomic) CGFloat titleSpaceTracking; // ivar: _titleSpaceTracking
@property (nonatomic) CGFloat titleStroke; // ivar: _titleStroke
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText
@property (nonatomic) CGFloat titleTracking; // ivar: _titleTracking
@property (retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // ivar: _titleWidthConstraint


-(CGFloat)initialSubtitleMultiplierWithSize:(struct CGSize )arg0 titleMultiplier:(CGFloat)arg1 ;
-(CGFloat)initialTitleMultiplierWithSize:(struct CGSize )arg0 ;
-(CGFloat)maxHeightForDisplayForSize:(struct CGSize )arg0 ;
-(CGFloat)maxWidthForDisplayForSize:(struct CGSize )arg0 ;
-(CGFloat)subtitleLineHeight;
-(CGFloat)subtitleTotalHeight;
-(CGFloat)titleLineAscender;
-(CGFloat)titleLineDesenderHeight;
-(CGFloat)titleLineHeight;
-(CGFloat)titleLineLeading;
-(CGFloat)titleTotalHeight;
-(NSInteger)titleLineCount;
-(id)attributedSubTitleString;
-(id)attributedTitleString;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)subtitleFont;
-(id)titleFont;
-(struct CGSize )aspectCorrectedSizeForSize:(struct CGSize )arg0 ;
-(void)emulatePhotosSubtitleStylesWithSize:(struct CGSize )arg0 multiplier:(CGFloat)arg1 ;
-(void)emulatePhotosTitleStylesWithSize:(struct CGSize )arg0 multiplier:(CGFloat)arg1 ;
-(void)makeSubviewsWithSize:(struct CGSize )arg0 ;
-(void)updateSubtitleTitleLabelForSize:(struct CGSize )arg0 ;


@end


#endif