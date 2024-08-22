// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSPOINTSOFINTERESTPICKERINFOVIEW_H
#define CPSPOINTSOFINTERESTPICKERINFOVIEW_H

@class UIView, UIStackView, NSString, UILabel, CPPointOfInterest;
@protocol CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding, CPSPointsOfInterestPickerInfoDelegate;


#import "CPSStyledTextButton.h"

@interface CPSPointsOfInterestPickerInfoView : UIView <CPSButtonDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding>



@property (retain, nonatomic) UIStackView *bottomStackView; // ivar: _bottomStackView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSPointsOfInterestPickerInfoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailsInformativeText; // ivar: _detailsInformativeText
@property (retain, nonatomic) UILabel *detailsSubtitle; // ivar: _detailsSubtitle
@property (retain, nonatomic) UILabel *detailsTitle; // ivar: _detailsTitle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPPointOfInterest *model; // ivar: _model
@property (retain, nonatomic) CPSStyledTextButton *primaryButton; // ivar: _primaryButton
@property (retain, nonatomic) CPSStyledTextButton *secondaryButton; // ivar: _secondaryButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UIStackView *topStackView; // ivar: _topStackView
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;


-(id)_linearFocusItems;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)didSelectButton:(id)arg0 ;
-(void)setupViews;
-(void)updateWithModel:(id)arg0 ;


@end


#endif