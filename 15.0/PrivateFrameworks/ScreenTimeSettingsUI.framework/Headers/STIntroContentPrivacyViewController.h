// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STINTROCONTENTPRIVACYVIEWCONTROLLER_H
#define STINTROCONTENTPRIVACYVIEWCONTROLLER_H

@class OBWelcomeController;



@interface STIntroContentPrivacyViewController : OBWelcomeController

@property (readonly, copy) id *continueHandler; // ivar: _continueHandler


-(id)initWithContinueHandler:(id)arg0 ;
-(void)_continue:(id)arg0 ;
-(void)loadView;


@end


#endif