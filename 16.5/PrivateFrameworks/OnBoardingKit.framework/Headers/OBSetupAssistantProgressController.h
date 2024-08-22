// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBSETUPASSISTANTPROGRESSCONTROLLER_H
#define OBSETUPASSISTANTPROGRESSCONTROLLER_H

@class NSString, UIProgressView, UILabel, NSLayoutConstraint;
@protocol OBSetupAssistantSupport;


#import "OBWelcomeController.h"

@interface OBSetupAssistantProgressController : OBWelcomeController <OBSetupAssistantSupport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIProgressView *progressBar; // ivar: _progressBar
@property (retain, nonatomic) UILabel *progressLabel; // ivar: _progressLabel
@property (retain, nonatomic) NSLayoutConstraint *progressLabelTopAnchorConstraint; // ivar: _progressLabelTopAnchorConstraint
@property (readonly) Class superclass;


-(CGFloat)_progressLabelTopAnchorConstraintConstantWithFont:(id)arg0 ;
-(id)_progressFont;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(void)setProgress:(CGFloat)arg0 ;
-(void)setProgressText:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif