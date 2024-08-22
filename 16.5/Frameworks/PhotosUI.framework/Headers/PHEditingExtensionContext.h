// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHEDITINGEXTENSIONCONTEXT_H
#define PHEDITINGEXTENSIONCONTEXT_H

@class NSExtensionContext, NSNumber, NSUndoManager;
@protocol PUEditingExtensionVendor;


#import "PUEditingInitialPayload.h"
#import "PUEditingExtensionUndoAdapter.h"

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor>

 {
    NSNumber *_fullSizeImageSandboxExtensionHandleWrapper;
    NSNumber *_videoPathSandboxExtensionHandleWrapper;
}


@property (readonly) PUEditingInitialPayload *_initialPayload; // ivar: __initialPayload
@property (nonatomic) BOOL attemptUndoManagerAutoSetup; // ivar: _attemptUndoManagerAutoSetup
@property (retain, nonatomic) PUEditingExtensionUndoAdapter *undoAdapter; // ivar: _undoAdapter
@property (retain, nonatomic) NSUndoManager *undoManagerForBarButtons; // ivar: _undoManagerForBarButtons


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_contentEditingController;
-(void)_releaseSandboxExtensions;
-(void)beginContentEditingWithCompletionHandler:(id)arg0 ;
-(void)cancelContentEditingWithResponseHandler:(id)arg0 ;
-(void)dealloc;
-(void)finishContentEditing;
-(void)queryHandlingCapabilityForAdjustmentData:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)querySDKVersionWithResponseHandler:(id)arg0 ;
-(void)queryShouldShowCancelConfirmationWithResponseHandler:(id)arg0 ;
-(void)setupUndoProxyWithXPCListenerEndpoint:(id)arg0 attemptUndoManagerAutoSetup:(BOOL)arg1 ;


@end


#endif