// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITDEPARTURESSECTIONHEADERVIEW_H
#define MKTRANSITDEPARTURESSECTIONHEADERVIEW_H

@class UIStackView, NSTimer, UIActivityIndicatorView, NSLayoutConstraint, NSString;


#import "MKCustomSeparatorCell.h"
#import "_MKUILabel.h"
#import "MKButtonWithTargetArgument.h"

@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorCell {
    NSUInteger _type;
    BOOL _extraSpacing;
    _MKUILabel *_label;
    UIStackView *_updatingView;
    _MKUILabel *_updatingLabel;
    NSTimer *_updatingLabelTimestampRefreshTimer;
    NSTimer *_updatingViewRefreshTimer;
    UIActivityIndicatorView *_updatingSpinner;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}


@property (readonly, nonatomic) MKButtonWithTargetArgument *button; // ivar: _button
@property (copy, nonatomic) NSString *text;


+(id)_buttonFont:(NSUInteger)arg0 ;
+(id)_font:(NSUInteger)arg0 ;
-(id)_initWithType:(NSUInteger)arg0 extraSpacing:(BOOL)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithType:(NSUInteger)arg0 extraSpacing:(BOOL)arg1 ;
-(id)initWithType:(NSUInteger)arg0 extraSpacing:(BOOL)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)dealloc;
-(void)tintColorDidChange;


@end


#endif