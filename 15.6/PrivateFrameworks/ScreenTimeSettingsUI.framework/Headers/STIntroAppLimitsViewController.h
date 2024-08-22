// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STINTROAPPLIMITSVIEWCONTROLLER_H
#define STINTROAPPLIMITSVIEWCONTROLLER_H

@class OBBoldTrayButton;


#import "STTableWelcomeController.h"
#import "STIntroductionModel.h"
#import "STIntroAppLimitsTableViewController.h"

@interface STIntroAppLimitsViewController : STTableWelcomeController

@property (readonly, copy) id *continueHandler; // ivar: _continueHandler
@property (readonly) STIntroductionModel *model; // ivar: _model
@property (retain) OBBoldTrayButton *setAppLimitButton; // ivar: _setAppLimitButton
@property (retain, nonatomic) STIntroAppLimitsTableViewController *tableViewController;


-(id)initWithIntroductionModel:(id)arg0 continueHandler:(id)arg1 ;
-(void)_allowanceSelectedCategoriesDidChange:(id)arg0 ;
-(void)_allowanceTimeDidChange:(id)arg0 ;
-(void)_notNow:(id)arg0 ;
-(void)_setAppLimit:(id)arg0 ;
-(void)_updateSetAppLimitButtonWithTime:(id)arg0 selectedCategories:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif