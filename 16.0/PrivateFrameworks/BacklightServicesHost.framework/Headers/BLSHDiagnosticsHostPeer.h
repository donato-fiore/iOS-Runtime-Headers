// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHDIAGNOSTICSHOSTPEER_H
#define BLSHDIAGNOSTICSHOSTPEER_H

@class RBSProcessMonitor, NSMutableDictionary, NSString;
@protocol BLSDiagnosticsXPCHostInterface, BSInvalidatable, BLSFlipbookDiagnosticsProviding, BLSDiagnosticsXPCClientInterface;

#import <Foundation/Foundation.h>


@interface BLSHDiagnosticsHostPeer : NSObject <BLSDiagnosticsXPCHostInterface, BSInvalidatable>

 {
    id<BLSFlipbookDiagnosticsProviding> *_flipbookDiagnosticsProvider;
    id<BLSDiagnosticsXPCClientInterface> *_client;
    RBSProcessMonitor *_processMonitor;
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_hostFrames;
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
-(NSUInteger)hostFramesCount;
-(id)_lock_hostFrameForUUID:(id)arg0 ;
-(id)allFlipbookFrames;
-(id)frameOnGlassWhenFlipbookLastCancelled;
-(id)hostFrameForUUID:(id)arg0 ;
-(id)initWithFlipbookDiagnosticsProvider:(id)arg0 peer:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)releaseFrameUUID:(id)arg0 ;
-(void)releaseSurfaceForFrameUUID:(id)arg0 ;
-(void)surfaceForFrameUUID:(id)arg0 reply:(id)arg1 ;


@end


#endif