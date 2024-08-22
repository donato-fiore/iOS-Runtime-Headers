// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITPLUGINHOSTVIEWCONTROLLER_H
#define PUEDITPLUGINHOSTVIEWCONTROLLER_H

@class UIViewController, NSNumber, NSString, UIBarButtonItem;
@protocol PXForcedDismissableViewController, PUEditingExtensionUndoButtonHost, NSCopying, PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate;


#import "PUEditPlugin.h"
#import "PUEditingExtensionUndoProxyHostSide.h"

@interface PUEditPluginHostViewController : UIViewController <PXForcedDismissableViewController, PUEditingExtensionUndoButtonHost>



@property (retain, nonatomic, setter=_setAllowsFullScreen:) NSNumber *_allowsFullScreen; // ivar: __allowsFullScreen
@property (nonatomic, setter=_setDidHandleCancel:) BOOL _didHandleCancel; // ivar: __didHandleCancel
@property (nonatomic, setter=_setDidHandleDone:) BOOL _didHandleDone; // ivar: __didHandleDone
@property (retain, nonatomic, setter=_setDisablingIdleTimerToken:) id *_disablingIdleTimerToken; // ivar: __disablingIdleTimerToken
@property (nonatomic, setter=_setExtensionDidBeginContentEditing:) BOOL _extensionDidBeginContentEditing; // ivar: __extensionDidBeginContentEditing
@property (retain, setter=_setRemoteViewController:) UIViewController *_remoteViewController; // ivar: __remoteViewController
@property (copy, setter=_setRequest:) NSObject<NSCopying> *_request; // ivar: __request
@property (weak, nonatomic) NSObject<PUEditPluginHostViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUEditPluginHostViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PUEditPlugin *plugin; // ivar: _plugin
@property (weak, nonatomic) UIBarButtonItem *redoBarButtonItem; // ivar: _redoBarButtonItem
@property (nonatomic) BOOL showUndoRedoButtons; // ivar: _showUndoRedoButtons
@property (readonly) Class superclass;
@property (weak, nonatomic) UIBarButtonItem *undoBarButtonItem; // ivar: _undoBarButtonItem
@property (retain, nonatomic) PUEditingExtensionUndoProxyHostSide *undoProxy; // ivar: _undoProxy


-(BOOL)prefersStatusBarHidden;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(id)_extensionVendorProxy;
-(id)_hostContext;
-(id)initWithPlugin:(id)arg0 ;
-(void)_addRemoteViewControllerIfNeededAllowingFullscreen:(BOOL)arg0 ;
// -(void)_beginContentEditingWithCompletionHandler:(id)arg0 timeout:(unk)arg1  ;
-(void)_beginDisablingIdleTimer;
-(void)_dismiss;
-(void)_endDisablingIdleTimerIfNecessary;
-(void)_handleCancel;
-(void)_handleCancelButton:(id)arg0 ;
-(void)_handleDoneButton:(id)arg0 ;
-(void)_handleVendorVersion:(unsigned int)arg0 completion:(id)arg1 ;
-(void)_queryAllowsFullScreen:(id)arg0 ;
// -(void)_queryShouldShowCancelConfirmationWithResponseHandler:(id)arg0 timeout:(unk)arg1  ;
-(void)_setupUndoProxy;
-(void)_updateBarButtonsWithUndoRedoVisible:(BOOL)arg0 ;
-(void)dealloc;
-(void)handleRedoButton:(id)arg0 ;
-(void)handleUndoButton:(id)arg0 ;
-(void)loadRemoteViewControllerWithCompletionHandler:(id)arg0 ;
-(void)loadView;
// -(void)queryHandlingCapabilityForAdjustmentData:(id)arg0 withResponseHandler:(id)arg1 timeout:(unk)arg2  ;
-(void)setShowUndoRedo:(BOOL)arg0 ;
-(void)setUndoEnabled:(BOOL)arg0 redoEnabled:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif