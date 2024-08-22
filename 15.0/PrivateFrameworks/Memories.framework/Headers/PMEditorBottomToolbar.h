// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMEDITORBOTTOMTOOLBAR_H
#define PMEDITORBOTTOMTOOLBAR_H

@class UIToolbar, NSString, UIBarButtonItem;
@protocol PMEditorAutoEditCompletionActionDelegate, PMPlayerControlling, PMEditorToolbarDelegate;



@interface PMEditorBottomToolbar : UIToolbar <PMEditorAutoEditCompletionActionDelegate>



@property (nonatomic) BOOL autoEditingIsInProgress; // ivar: _autoEditingIsInProgress
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem; // ivar: _doneButtonItem
@property (nonatomic) BOOL fromDuration; // ivar: _fromDuration
@property (nonatomic) BOOL fromMusic; // ivar: _fromMusic
@property (nonatomic) BOOL fromTitle; // ivar: _fromTitle
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PMPlayerControlling> *playerController; // ivar: _playerController
@property (nonatomic) BOOL showDoneCancelButtons; // ivar: _showDoneCancelButtons
@property (nonatomic) NSUInteger spinnerState; // ivar: _spinnerState
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<PMEditorToolbarDelegate> *toolbarDelegate; // ivar: _toolbarDelegate


-(id)_activityItem;
-(id)_cancelButtonItem;
-(id)_doneActivityButtonRow;
-(id)_fixedSpaceItem;
-(id)_flexibleSpaceItem;
-(id)_pauseButtonItem;
-(id)_pauseButtonRow;
-(id)_playActivityButtonRow;
-(id)_playButtonItem;
-(id)_playButtonRow;
-(id)initWithCoder:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_handlePlayerDidBeginPlayingNotification:(id)arg0 ;
-(void)_handlePlayerDidDidPlayToEndTimeNotification:(id)arg0 ;
-(void)_play:(id)arg0 ;
-(void)_updateItemsAnimated:(BOOL)arg0 ;
-(void)autoEditingDidEnd;
-(void)autoEditingWillBegin;
-(void)cancelAutoEditWaitingBehavior;
-(void)dealloc;
-(void)pause:(id)arg0 ;
-(void)performAutoEditDidCompleteAction;
-(void)setItems:(id)arg0 ;
-(void)setItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)startAutoEditWaitingBehavior;
-(void)updateItems;


@end


#endif