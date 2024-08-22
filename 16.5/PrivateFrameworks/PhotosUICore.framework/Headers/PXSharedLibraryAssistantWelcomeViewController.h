// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYASSISTANTWELCOMEVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTWELCOMEVIEWCONTROLLER_H

@class OBWelcomeController, UITextView, OBBoldTrayButton, NSString;
@protocol PXAssistantViewController, PXChangeObserver, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryLegacyDevicesFallbackMonitor.h"
#import "PXSharedLibraryLegacyDevicesRemoteController.h"

@interface PXSharedLibraryAssistantWelcomeViewController : OBWelcomeController <PXAssistantViewController, PXChangeObserver>

 {
    PXSharedLibraryLegacyDevicesFallbackMonitor *_legacyDevicesFallbackMonitor;
    PXSharedLibraryLegacyDevicesRemoteController *_legacyDevicesRemoteController;
    UITextView *_textView;
    OBBoldTrayButton *_startButton;
    BOOL _wantsToStepForward;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isLegacyDevicesFallbackMonitorEnabledAndReady;
-(CGFloat)_contentViewHeight;
-(id)initWithLegacyDevicesFallbackMonitor:(id)arg0 legacyDevicesRemoteController:(id)arg1 ;
-(void)_checkLegacyDeviceMonitorAndAttemptStepForward;
-(void)_forceStepForward;
-(void)_legacyDevicesFallbackMonitorChangedState;
-(void)_legacyDevicesRemoteControllerChangedState;
-(void)_updateTextView;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)startButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif