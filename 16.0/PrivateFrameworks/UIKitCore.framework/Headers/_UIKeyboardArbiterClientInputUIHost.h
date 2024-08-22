// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDARBITERCLIENTINPUTUIHOST_H
#define _UIKEYBOARDARBITERCLIENTINPUTUIHOST_H

@class UIKeyboardArbiterClient;



@interface _UIKeyboardArbiterClientInputUIHost : UIKeyboardArbiterClient

@property (readonly, nonatomic) CGRect keyboardFrameIncludingRemoteIAV; // ivar: _keyboardFrameIncludingRemoteIAV
@property (nonatomic) BOOL showing; // ivar: _showing


-(BOOL)allowedToShowKeyboard;
-(BOOL)isCurrentInputDestination;
-(BOOL)isSpotlight:(id)arg0 ;
-(BOOL)remoteKeyboardUndocked:(BOOL)arg0 ;
-(BOOL)shouldSnapshot;
-(id)arbiterProxy;
-(id)currentHostedPIDs;
-(id)init;
-(void)_layoutKeyboardViews:(id)arg0 ;
-(void)applicationKeyWindowWillChange:(id)arg0 ;
-(void)completeKeyboardChange;
-(void)configureArbiterCommunication:(id)arg0 ;
-(void)keyboardVisibilityDidChangeWithFrame:(struct CGRect )arg0 visible:(BOOL)arg1 tracking:(BOOL)arg2 ;
-(void)queue_sceneBecameFocused:(id)arg0 withCompletion:(id)arg1 ;
-(void)resetSnapshotWithWindowCheck:(BOOL)arg0 ;
-(void)setCurrentUIState:(id)arg0 ;
-(void)signalKeyboardUIDidChange:(id)arg0 onCompletion:(id)arg1 ;
-(void)snapsShotKeyboard;


@end


#endif