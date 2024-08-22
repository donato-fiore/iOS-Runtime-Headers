// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUIENROLLTRAININGVIEW_H
#define VTUIENROLLTRAININGVIEW_H

@class UIView, SUICOrbView, SiriUIContentButton, UIButton, UILabel;
@protocol VTUIEnrollTrainingViewDelegate;


#import "VTUICheckMarkView.h"
#import "VTUIPagedLabel.h"

@interface VTUIEnrollTrainingView : UIView

@property (retain, nonatomic) VTUICheckMarkView *checkMark; // ivar: _checkMark
@property (nonatomic) BOOL checkMarkViewHidden; // ivar: _checkMarkViewHidden
@property (weak, nonatomic) NSObject<VTUIEnrollTrainingViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VTUIPagedLabel *instructionPagedLabel; // ivar: _instructionPagedLabel
@property (readonly, nonatomic) SUICOrbView *orbView; // ivar: _orbView
@property (retain, nonatomic) SiriUIContentButton *radarButton; // ivar: _radarButton
@property (nonatomic) BOOL radarButtonHidden; // ivar: _radarButtonHidden
@property (readonly, nonatomic) UIButton *radarExitButton; // ivar: _radarExitButton
@property (retain, nonatomic) UIButton *skipButton; // ivar: _skipButton
@property (nonatomic) BOOL skipButtonHidden; // ivar: _skipButtonHidden
@property (readonly, nonatomic) UILabel *statusLabel; // ivar: _statusLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupUI;
-(void)clearInstructionLabel;
-(void)dealloc;
-(void)showRadarExitButton:(id)arg0 ;
-(void)slideInText:(id)arg0 afterDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)startCheckMarkAnimation:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif