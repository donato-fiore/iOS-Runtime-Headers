// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEHOURSVIEW_H
#define MKPLACEHOURSVIEW_H

@class UIView, NSArray, NSLayoutConstraint, GEOBusinessHours, NSDictionary;
@protocol MKPlaceHoursViewDelegate;


#import "_MKUILabel.h"
#import "_MKLocalizedHoursBuilder.h"

@interface MKPlaceHoursView : UIView {
    NSArray *_labels;
    _MKUILabel *_topLabel;
    _MKUILabel *_topMessageLabel;
    _MKUILabel *_topDayOrHourLabel;
    _MKUILabel *_bottomMessageLabel;
    _MKUILabel *_collapsableOpenStateLabel;
    NSLayoutConstraint *_baselineToTop;
    NSArray *_baselineToBaselineConstraints;
    NSArray *_baselineToBottomConstraints;
    NSArray *_topAndBottomLabelConstraints;
    NSArray *_placeDailyHours;
}


@property (retain, nonatomic) GEOBusinessHours *businessHours; // ivar: _businessHours
@property (retain, nonatomic) NSDictionary *formattedHoursData; // ivar: _formattedHoursData
@property (retain, nonatomic) _MKLocalizedHoursBuilder *hoursBuilder; // ivar: _hoursBuilder
@property (weak, nonatomic) NSObject<MKPlaceHoursViewDelegate> *hoursDelegate; // ivar: _hoursDelegate
@property (nonatomic) NSUInteger placeHoursViewOptions; // ivar: _placeHoursViewOptions
@property (readonly, nonatomic) _MKUILabel *topLabel;


-(BOOL)_shouldCollapseTopMessageLabel;
-(BOOL)wantsDefaultClipping;
-(id)_standardLabel;
-(id)hoursGrayColor;
-(id)initWithBusinessHours:(id)arg0 ;
-(void)_collapseAllLabelsFromOptions;
-(void)_commonInit;
-(void)_contentSizeDidChange;
-(void)_updateHoursView;
-(void)_updateOptionsForCollapsingToSingleLineAndColor;
-(void)applyRulesForTopAndBottomLabel;
-(void)infoCardThemeChanged;


@end


#endif