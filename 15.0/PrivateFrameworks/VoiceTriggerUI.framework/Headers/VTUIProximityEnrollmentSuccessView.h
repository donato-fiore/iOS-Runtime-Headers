// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTUIPROXIMITYENROLLMENTSUCCESSVIEW_H
#define VTUIPROXIMITYENROLLMENTSUCCESSVIEW_H

@class NSString, SUICOrbView, UILabel, UIButton;


#import "VTUIProximityView.h"
#import "VTUIProximityContainerView.h"
#import "VTUIStyle.h"
#import "VTUIButton.h"

@interface VTUIProximityEnrollmentSuccessView : VTUIProximityView {
    NSString *_languageCode;
    SUICOrbView *_orbView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    VTUIProximityContainerView *_containerView;
    VTUIStyle *_vtStyle;
}


@property (readonly, nonatomic) VTUIButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraintsToSize:(struct CGSize )arg0 ;
-(void)_setupContent;
-(void)_setupPhoneLandscapeConstraints;
-(void)_setupPortraitConstraints;
-(void)dealloc;


@end


#endif