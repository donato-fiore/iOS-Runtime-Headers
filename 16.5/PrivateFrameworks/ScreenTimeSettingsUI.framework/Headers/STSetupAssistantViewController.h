// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSETUPASSISTANTVIEWCONTROLLER_H
#define STSETUPASSISTANTVIEWCONTROLLER_H

@class OBWelcomeController;
@protocol STSetupAssistantViewControllerDelegate;



@interface STSetupAssistantViewController : OBWelcomeController

@property (weak) NSObject<STSetupAssistantViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly) BOOL hasRestrictionsPasscode; // ivar: _hasRestrictionsPasscode
@property (readonly) NSInteger state; // ivar: _state


+(id)new;
-(id)init;
-(id)initWithScreenTimeState:(NSInteger)arg0 passcode:(BOOL)arg1 ;
-(void)_continue:(id)arg0 ;
-(void)_setUpLater:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif