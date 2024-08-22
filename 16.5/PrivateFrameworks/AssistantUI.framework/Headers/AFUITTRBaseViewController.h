// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUITTRBASEVIEWCONTROLLER_H
#define AFUITTRBASEVIEWCONTROLLER_H

@class UIViewController;


#import "AFUITTRReport.h"

@interface AFUITTRBaseViewController : UIViewController

@property (weak, nonatomic) id *completion; // ivar: _completion
@property (retain) AFUITTRReport *ttrReport; // ivar: _ttrReport


-(CGFloat)getHorizontalPadding;
-(CGFloat)getSpacerHeight;
-(CGFloat)getVerticalPadding;
-(id)continueButtonWithTitle:(id)arg0 isPrimary:(BOOL)arg1 ;
// -(id)initWithReport:(id)arg0 completion:(id)arg1 step:(unk)arg2 totalSteps:(NSInteger)arg3  ;
-(id)labelWithTitle:(id)arg0 ;
-(id)stackView;
-(void)setupBackButton;
-(void)setupSkipButton;
-(void)skipToTTRTapped;
-(void)viewDidLoad;


@end


#endif