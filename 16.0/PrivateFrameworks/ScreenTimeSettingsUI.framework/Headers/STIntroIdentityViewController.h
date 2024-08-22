// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STINTROIDENTITYVIEWCONTROLLER_H
#define STINTROIDENTITYVIEWCONTROLLER_H

@class OBWelcomeController;


#import "STIntroductionViewModel.h"

@interface STIntroIdentityViewController : OBWelcomeController

@property (readonly, copy) id *continueHandler; // ivar: _continueHandler
@property (readonly) STIntroductionViewModel *model; // ivar: _model


-(id)initWithIntroductionModel:(id)arg0 continueHandler:(id)arg1 ;
-(void)_myChildsDevice:(id)arg0 ;
-(void)_myDevice:(id)arg0 ;
-(void)loadView;


@end


#endif