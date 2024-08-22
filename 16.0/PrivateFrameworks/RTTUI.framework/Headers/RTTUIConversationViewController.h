// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTTUICONVERSATIONVIEWCONTROLLER_H
#define RTTUICONVERSATIONVIEWCONTROLLER_H

@class UIViewController, CAShapeLayer, UIButton, AXDispatchTimer, NSMutableCharacterSet, NSDictionary, NSMutableString, NSMutableArray, TUCall, RTTConversation, RTTUtterance, NSString, DDParsecCollectionViewController, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, RTTUIUtteranceCellDelegate, UITextViewDelegate, RTTUIServiceCellDelegate, BSInvalidatable;


#import "RTTUITextView.h"

@interface RTTUIConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, RTTUIUtteranceCellDelegate, UITextViewDelegate, RTTUIServiceCellDelegate>

 {
    RTTUITextView *_textView;
    CAShapeLayer *_bubbleLayer;
    UIButton *_gaButton;
    AXDispatchTimer *_ttyPredictionsTimer;
    AXDispatchTimer *_realTimeTimeout;
    AXDispatchTimer *_muteStatusTimeout;
    NSMutableCharacterSet *_unsupportedCharacterSet;
    NSDictionary *_asciiSubstitutions;
    AXDispatchTimer *_voAnnouncementTimer;
    NSMutableString *_voAnnouncementBuffer;
    NSMutableArray *_serviceUpdates;
    id<BSInvalidatable> *_sleepTimerDisabledAssertion;
    AXDispatchTimer *_textInputQuickCoalescer;
}


@property (retain, nonatomic) TUCall *call; // ivar: _call
@property (retain, nonatomic) RTTConversation *conversation; // ivar: _conversation
@property (retain, nonatomic) RTTUtterance *currentUtterance; // ivar: _currentUtterance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DDParsecCollectionViewController *lookupController; // ivar: _lookupController
@property (copy, nonatomic) id *rttConversationAvailabilityCallback; // ivar: _rttConversationAvailabilityCallback
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(BOOL)_validRectangle:(struct CGRect )arg0 ;
+(id)viewControllerForCall:(id)arg0 ;
+(id)viewControllerForConversation:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)currentCallIsDowngraded;
-(BOOL)isCurrentCallConnected;
-(BOOL)isCurrentCallOnHold;
-(BOOL)isCurrentCallReceivingOnHold;
-(BOOL)isCurrentCallSendingOnHold;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)utteranceIsSelected;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_updateTableViewUtteranceOldCount:(NSUInteger)arg0 newCount:(NSUInteger)arg1 ;
-(id)addTranscriptionText:(id)arg0 isNew:(BOOL)arg1 ;
-(id)addUtterance:(id)arg0 ;
-(id)cannedResponses;
-(id)contactDisplayString;
-(id)currentCall;
-(id)currentContactPath;
-(id)init;
-(id)inputTextView;
-(id)lastConversationRowPathForUtterance:(id)arg0 ;
-(id)serviceUpdateCellAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)textViewUtterance;
-(id)utteranceCellAtIndexPath:(id)arg0 ;
-(void)_addServiceCellWithUpdate:(id)arg0 options:(id)arg1 ;
-(void)_define:(id)arg0 ;
-(void)_processRealtimeTimeout;
-(void)_removeServiceCellWithUpdate:(id)arg0 ;
-(void)_replaceServiceCellWithOldUpdate:(id)arg0 withNewUpdate:(id)arg1 options:(id)arg2 ;
-(void)_scrollToIndexPathIfNecessary:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateBarButtonState;
-(void)_updateTableViewRowAtIndexPath:(id)arg0 action:(NSInteger)arg1 animation:(NSInteger)arg2 ;
-(void)_updateTableViewRowsAtIndexPaths:(id)arg0 action:(NSInteger)arg1 animation:(NSInteger)arg2 ;
-(void)addServiceCellWithUpdate:(id)arg0 options:(id)arg1 ;
-(void)callDidConnect:(id)arg0 ;
-(void)dealloc;
-(void)deviceDidReceiveString:(id)arg0 forUtterance:(id)arg1 ;
-(void)gaButtonPressed:(id)arg0 ;
-(void)logCallHold:(BOOL)arg0 ;
-(void)realtimeTextDidChange;
-(void)removeServiceCellWithUpdate:(id)arg0 ;
-(void)replaceServiceCellWithOldUpdate:(id)arg0 withNewUpdate:(id)arg1 options:(id)arg2 ;
-(void)setTextViewUtterance:(id)arg0 ;
-(void)setupTableView;
-(void)shareCallInfo:(id)arg0 ;
-(void)showCallEnded;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)toggleHold:(id)arg0 ;
-(void)toggleMute:(id)arg0 ;
-(void)updateBarButtons;
-(void)updateCallDowngradeStatus;
-(void)updateCallHold:(id)arg0 ;
-(void)updateGAButton;
-(void)updateInputEnabled;
-(void)updateTableViewSizeAnimated:(BOOL)arg0 ;
-(void)updateUtterance:(id)arg0 forIndexPath:(id)arg1 ;
-(void)updateViewForKeyboard:(id)arg0 ;
-(void)updateVoiceOverAnnouncement:(id)arg0 ;
-(void)utteranceCellDidUpdateContent:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif