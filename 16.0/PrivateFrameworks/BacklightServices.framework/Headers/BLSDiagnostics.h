// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSDIAGNOSTICS_H
#define BLSDIAGNOSTICS_H

@class BSServiceConnection, NSString;
@protocol BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLSDiagnostics : NSObject <BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding>

 {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_lock_connection;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allFlipbookFrames;
-(id)frameOnGlassWhenFlipbookLastCancelled;
-(id)init;
-(struct __IOSurface *)surfaceForFrame:(id)arg0 ;
-(void)dealloc;
-(void)releaseFrame:(id)arg0 ;
-(void)releaseSurfaceForFrame:(id)arg0 ;


@end


#endif