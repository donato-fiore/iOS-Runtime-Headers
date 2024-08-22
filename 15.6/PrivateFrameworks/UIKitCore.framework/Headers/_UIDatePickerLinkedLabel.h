// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERLINKEDLABEL_H
#define _UIDATEPICKERLINKEDLABEL_H

@class NSMapTable, NSLayoutConstraint, NSString, UIFont, NSDictionary, NSArray;
@protocol UIContentSizeCategoryAdjusting;


#import "UIView.h"
#import "UILabel.h"
#import "UILayoutGuide.h"
#import "_UIDatePickerLinkedLabelStorage.h"
#import "UIColor.h"

@interface _UIDatePickerLinkedLabel : UIView <UIContentSizeCategoryAdjusting>

 {
    ? _flags;
    UILabel *_renderingLabel;
    CGSize _lastSize;
    NSMapTable *_longestPossibleTitle;
    NSMapTable *_longestPossibleWidth;
    NSLayoutConstraint *_renderLabelXConstraint;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // ivar: _contentLayoutGuide
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (retain, nonatomic) NSDictionary *overrideAttributes; // ivar: _overrideAttributes
@property (retain, nonatomic) NSArray *possibleTitles; // ivar: _possibleTitles
@property (retain, nonatomic) _UIDatePickerLinkedLabelStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (retain, nonatomic) NSArray *titles; // ivar: _titles


-(id)_longestPossibleTitleForPriority:(NSUInteger)arg0 width:(*CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidatePossibleTitleCaches;
-(void)_setNeedsStorageSync;
-(void)_updateAlignmentConstraint;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentCompressionResistancePriority:(float)arg0 forAxis:(NSInteger)arg1 ;
-(void)setContentHuggingPriority:(float)arg0 forAxis:(NSInteger)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif