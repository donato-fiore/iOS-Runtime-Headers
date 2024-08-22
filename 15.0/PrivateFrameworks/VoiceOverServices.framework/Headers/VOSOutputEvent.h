// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOSOUTPUTEVENT_H
#define VOSOUTPUTEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VOSOutputEvent : NSObject {
    NSString *_rawValue;
}


@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *rawValue;
@property (nonatomic) BOOL supportsHaptic; // ivar: _supportsHaptic
@property (nonatomic) BOOL supportsSoundEffect; // ivar: _supportsSoundEffect


+(id)AlertDidAppear;
+(id)AutofillDidAppear;
+(id)AutofillDidDismiss;
+(id)BoundaryEncountered;
+(id)BrailleDisplayConnected;
+(id)BrailleDisplayDisconnected;
+(id)CollaborationOccurred;
+(id)DidActivateElement;
+(id)DidBeginPassthrough;
+(id)DidChangeTextSelectionDirection;
+(id)DidChangeVolume;
+(id)DidDisableQuickNav;
+(id)DidEnableQuickNav;
+(id)DidEnterSecureText;
+(id)DidEnterTargetArea;
+(id)DidEnterTouchContainer;
+(id)DidFocusOnElement;
+(id)DidLeaveTargetArea;
+(id)DidRecognizeMLContent;
+(id)DidReorderItem;
+(id)DidScrollByPage;
+(id)DidSelectAutofill;
+(id)DidSelectNextRotor;
+(id)DidSelectPreviousRotor;
+(id)DidSyncWithSystemFocus;
+(id)DidWrapBackwards;
+(id)DidWrapForwards;
+(id)DockDidAppear;
+(id)DockDidDisappear;
+(id)FolderDidClose;
+(id)FolderDidOpen;
+(id)FolderWillOpen;
+(id)InsertionPointDidMove;
+(id)InteractIn;
+(id)InteractOut;
+(id)IsInteractable;
+(id)ItemDidLoad;
+(id)ItemIsLoading;
+(id)ItemMemorizationFailed;
+(id)ItemMemorizationInProgress;
+(id)ItemMemorizationSucceeded;
+(id)KeyboardAppeared;
+(id)KeyboardDisappeared;
+(id)NextRotorProgress;
+(id)NoItemExists;
+(id)NoResultsFound;
+(id)PopoverDidAppear;
+(id)PreviousRotorProgress;
+(id)ReachabilityDidBegin;
+(id)ReachabilityDidEnd;
+(id)ScreenDidChange;
+(id)ScreenDidTurnOff;
+(id)SensitiveContent;
+(id)TVDidBeginInteractionWithRotor;
+(id)TVDidEndInteractionWithRotor;
+(id)TouchIDAuthenticated;
+(id)TouchIDFailed;
+(id)UnknownCommand;
+(id)allOutputEvents;
+(id)eventWithStringValue:(id)arg0 ;
-(id)_initOutputEventWithRawValue:(id)arg0 supportsSoundEffect:(BOOL)arg1 supportsHaptic:(BOOL)arg2 ;
-(id)description;


@end


#endif