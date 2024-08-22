// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUIHEADPHONELEVELVIEW_H
#define HUIHEADPHONELEVELVIEW_H

@class UIControl, UIView, NSNumberFormatter, NSString, UIVisualEffectView, UILabel, NSArray;
@protocol HACCContentModule, HACCContentModuleDelegate;


#import "HUIHeadphoneLevelGroup.h"

@interface HUIHeadphoneLevelView : UIControl <HACCContentModule>



@property (retain, nonatomic) UIView *centerContainer; // ivar: _centerContainer
@property (retain, nonatomic) NSNumberFormatter *dbFormatter; // ivar: _dbFormatter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HACCContentModuleDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRTL; // ivar: _isRTL
@property (retain, nonatomic) UIVisualEffectView *labelContainer; // ivar: _labelContainer
@property (nonatomic) int layoutViewSize; // ivar: _layoutViewSize
@property (retain, nonatomic) HUIHeadphoneLevelGroup *levelGroup; // ivar: _levelGroup
@property (retain, nonatomic) UILabel *maxLabel; // ivar: _maxLabel
@property (retain, nonatomic) UILabel *minLabel; // ivar: _minLabel
@property (nonatomic) NSUInteger module; // ivar: module
@property (retain, nonatomic) UIView *subtitleContainer; // ivar: _subtitleContainer
@property (retain, nonatomic) UILabel *subtitleLeftLabel; // ivar: _subtitleLeftLabel
@property (retain, nonatomic) UILabel *subtitleRightLabel; // ivar: _subtitleRightLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *thresholdLabel; // ivar: _thresholdLabel
@property (retain, nonatomic) UIVisualEffectView *titleContainer; // ivar: _titleContainer
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSArray *viewConstraints; // ivar: _viewConstraints


-(BOOL)enabled;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)_accessibilityUserTestingChildren;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)contentValue;
-(id)formatLevel:(id)arg0 baseFont:(id)arg1 ;
-(id)formatLevelRating:(id)arg0 threshold:(NSUInteger)arg1 ;
-(id)init;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)updateValue;
-(void)updateViewsWithSlowLeq:(CGFloat)arg0 fastLeq:(CGFloat)arg1 andThreshold:(NSUInteger)arg2 ;


@end


#endif