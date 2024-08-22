// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACERESERVATIONROWVIEW_H
#define MKPLACERESERVATIONROWVIEW_H

@class UISegmentedControl, UIButton, NSMutableArray, NSLayoutConstraint, NSString;


#import "MKPlaceSectionRowView.h"
#import "_MKPlaceReservationInfo.h"

@interface MKPlaceReservationRowView : MKPlaceSectionRowView {
    UISegmentedControl *_openTimesControl;
    UIButton *_buttonMakeReservation;
    UIButton *_buttonAttribution;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_constraintButtonTopMargin;
    NSLayoutConstraint *_constraintButtonBottomMargin;
}


@property (readonly, nonatomic) _MKPlaceReservationInfo *reservationInfo; // ivar: _reservationInfo
@property (nonatomic) NSUInteger selectedTimeIndex;
@property (retain, nonatomic) NSString *selectedTimeString;


-(CGFloat)_buttonBottomMargin;
-(CGFloat)_buttonTopMargin;
-(id)_attributedStringFromButtonTitle:(id)arg0 useSmallFont:(BOOL)arg1 ;
-(id)_buttonFontLarge;
-(id)_buttonFontSmall;
-(id)_newButtonForAttribution:(BOOL)arg0 ;
-(id)initWithReservationInfo:(id)arg0 ;
-(void)_actionMakeReservation;
-(void)_contentSizeDidChange;
-(void)_setupImmutableConstraints;
-(void)_updateButtonTitleAttributes;
-(void)_updateMutableConstraints;
-(void)_updateTintColor;
-(void)_updateWithReservationInfo;
-(void)tintColorDidChange;


@end


#endif