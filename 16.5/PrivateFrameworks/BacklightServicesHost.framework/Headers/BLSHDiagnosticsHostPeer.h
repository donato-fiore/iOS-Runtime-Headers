// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHDIAGNOSTICSHOSTPEER_H
#define BLSHDIAGNOSTICSHOSTPEER_H

@class RBSProcessMonitor, BLSDiagnosticFlipbookFrame, NSString;
@protocol BLSDiagnosticsXPCHostInterface, BSInvalidatable, BLSFlipbookDiagnosticsProviding;

#import <Foundation/Foundation.h>


@interface BLSHDiagnosticsHostPeer : NSObject <BLSDiagnosticsXPCHostInterface, BSInvalidatable>

 {
    id<BLSFlipbookDiagnosticsProviding> *_flipbookDiagnosticsProvider;
    RBSProcessMonitor *_processMonitor;
    os_unfair_lock_s _lock;
    BLSDiagnosticFlipbookFrame *_lock_cachedFrameOnGlassNow;
    BLSDiagnosticFlipbookFrame *_lock_cachedLastCancelledFrame;
    int _clientPid;
    BOOL _clientIsTaskScheduled;
    BOOL _valid;
    NSUInteger _entitlements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isValid;
-(id)_lock_validateHostFrame:(id)arg0 source:(id)arg1 ;
-(id)allFlipbookFrames;
-(id)frameOnGlassNow;
-(id)frameOnGlassWhenFlipbookLastCancelled;
-(id)hostFrameForUUID:(id)arg0 ;
-(id)initWithFlipbookDiagnosticsProvider:(id)arg0 peer:(id)arg1 ;
-(void)dealloc;
// -(void)genericSurfaceForFrameUUID:(id)arg0 reply:(id)arg1 name:(unk)arg2 surfaceFromFrame:(id)arg3  ;
-(void)invalidate;
-(void)rawSurfaceForFrameUUID:(id)arg0 reply:(id)arg1 ;
-(void)surfaceForFrameUUID:(id)arg0 reply:(id)arg1 ;


@end


#endif