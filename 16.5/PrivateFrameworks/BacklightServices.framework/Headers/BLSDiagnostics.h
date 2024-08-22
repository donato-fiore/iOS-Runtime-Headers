// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSDIAGNOSTICS_H
#define BLSDIAGNOSTICS_H

@class BSServiceConnection, NSString;
@protocol BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding, BSInvalidatable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLSDiagnostics : NSObject <BLSDiagnosticFlipbookFrameSurfaceProvider, BLSFlipbookDiagnosticsProviding, BSInvalidatable>

 {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allFlipbookFrames;
-(id)frameOnGlassNow;
-(id)frameOnGlassWhenFlipbookLastCancelled;
-(id)frameWithUUID:(id)arg0 ;
-(id)init;
-(struct __IOSurface *)rawSurfaceForFrame:(id)arg0 ;
-(struct __IOSurface *)surfaceForFrame:(id)arg0 ;
-(void)invalidate;


@end


#endif