// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTUIPROXIMITYENROLLTRAININGVIEW_H
#define VTUIPROXIMITYENROLLTRAININGVIEW_H

@class VTPreferences, UIView, UIButton, SUICOrbView, UILabel, NSArray;


#import "VTUIProximityView.h"
#import "VTUIStyle.h"
#import "VTUICheckMarkView.h"
#import "VTUIPagedLabel.h"

@interface VTUIProximityEnrollTrainingView : VTUIProximityView {
    VTUIStyle *_vtStyle;
    VTPreferences *_vtPrefs;
}


@property (retain, nonatomic) VTUICheckMarkView *checkMark; // ivar: _checkMark
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (nonatomic) NSInteger enrollmentStyle; // ivar: _enrollmentStyle
@property (retain, nonatomic) VTUIPagedLabel *instructionPagedLabel; // ivar: _instructionPagedLabel
@property (retain, nonatomic) SUICOrbView *orbView; // ivar: _orbView
@property (retain, nonatomic) UILabel *pageLabel; // ivar: _pageLabel
@property (retain, nonatomic) UIButton *skipButton; // ivar: _skipButton
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel
@property (retain, nonatomic) NSArray *viewConstraints; // ivar: _viewConstraints


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forEnrollmentStyle:(NSInteger)arg1 ;
-(void)_setupConstraintsToSize:(struct CGSize )arg0 ;
-(void)_setupContent;
-(void)dealloc;


@end


#endif