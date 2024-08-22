// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRUNWORKFLOWTOOLBAR_H
#define WFRUNWORKFLOWTOOLBAR_H

@class UIView, NSString, UIBarButtonItem, NSArray, UIToolbar, NSUndoManager;
@protocol UIToolbarDelegate, WFRunWorkflowToolbarDelegate;



@interface WFRunWorkflowToolbar : UIView <UIToolbarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFRunWorkflowToolbarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (retain, nonatomic) UIBarButtonItem *flexibleSpaceItem; // ivar: _flexibleSpaceItem
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (nonatomic) BOOL playEnabled; // ivar: _playEnabled
@property (nonatomic, getter=isPulsating) BOOL pulsating; // ivar: _pulsating
@property (retain, nonatomic) UIBarButtonItem *redoItem; // ivar: _redoItem
@property (retain, nonatomic) UIBarButtonItem *runItem; // ivar: _runItem
@property (readonly, copy, nonatomic) NSArray *runItems;
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (nonatomic) BOOL shareEnabled; // ivar: _shareEnabled
@property (nonatomic) BOOL shareHidden; // ivar: _shareHidden
@property (retain, nonatomic) UIBarButtonItem *shareItem; // ivar: _shareItem
@property (retain, nonatomic) UIBarButtonItem *stopItem; // ivar: _stopItem
@property (readonly) Class superclass;
@property (weak, nonatomic) UIToolbar *toolbar; // ivar: _toolbar
@property (retain, nonatomic) UIBarButtonItem *undoItem; // ivar: _undoItem
@property (readonly, copy, nonatomic) NSArray *undoRedoItems;
@property (weak, nonatomic) NSUndoManager *workflowUndoManager; // ivar: _workflowUndoManager


-(BOOL)isNotRunningAndIsEditing;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)playTapped;
-(void)redoTapped;
-(void)shareTapped;
-(void)stopTapped;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)undoTapped;
-(void)updateBarButtonItems;
-(void)updatePlayButtonVisibility;
-(void)updateShareButtonVisibility;
-(void)updateUndoItems;


@end


#endif