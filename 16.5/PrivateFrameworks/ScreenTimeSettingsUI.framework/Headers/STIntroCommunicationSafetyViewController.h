// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STINTROCOMMUNICATIONSAFETYVIEWCONTROLLER_H
#define STINTROCOMMUNICATIONSAFETYVIEWCONTROLLER_H

@class OBWelcomeController;


#import "STIntroductionViewModel.h"

@interface STIntroCommunicationSafetyViewController : OBWelcomeController

@property (readonly, copy) id *continueHandler; // ivar: _continueHandler
@property (readonly) STIntroductionViewModel *model; // ivar: _model


-(id)initWithIntroductionModel:(id)arg0 childName:(id)arg1 continueHandler:(id)arg2 ;
-(void)_openCommunicationSafetyLearnMoreLink;
-(void)_setUpLater:(id)arg0 ;
-(void)_turnOnCommunicationSafety:(id)arg0 ;
-(void)loadView;


@end


#endif