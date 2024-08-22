// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUICONTENTCOLLECTIONVIEWCELL_H
#define SIRIUICONTENTCOLLECTIONVIEWCELL_H

@class UIImageView, NSLayoutConstraint, NSMutableArray, UIView, UIColor, UILabel;


#import "SiriUIClearBackgroundCell.h"
#import "SiriUIKeyline.h"

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {
    UIImageView *_chevronView;
    BOOL _hasSetUpSubviewConstraints;
    BOOL _hasSetupStaticSubviewConstraints;
    NSLayoutConstraint *leftChevronWidthConstraint;
    NSLayoutConstraint *rightChevronWidthConstraint;
    NSMutableArray *_subviewConstraints;
}


@property (nonatomic) UIOffset accessoryOffset; // ivar: _accessoryOffset
@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) UIOffset chevronOffset; // ivar: _chevronOffset
@property (readonly, nonatomic) CGFloat chevronTrailingMargin;
@property (retain, nonatomic) UIView *customView; // ivar: _customView
@property (nonatomic) UIEdgeInsets customViewEdgeInsets; // ivar: _customViewEdgeInsets
@property (nonatomic) BOOL hasChevron; // ivar: _hasChevron
@property (readonly, nonatomic) SiriUIKeyline *keyline; // ivar: _keyline
@property (retain, nonatomic) UIColor *keylineCustomBackgroundColor;
@property (nonatomic) NSInteger keylineType; // ivar: _keylineType
@property (nonatomic) UIEdgeInsets textAndAccessoryInsets; // ivar: _textAndAccessoryInsets
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (nonatomic) UIOffset textOffset; // ivar: _textOffset
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment


+(BOOL)chevronBlendEffectEnabled;
+(id)reuseIdentifier;
+(struct UIEdgeInsets )defaultInsets;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateSubviewConstraints;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setNeedsUpdateSubviewConstraints;
-(void)updateConstraints;


@end


#endif