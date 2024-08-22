// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARENVIRONMENTPROBEMANAGER_H
#define ARENVIRONMENTPROBEMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSUUID;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "AREnvironmentProbeUpdate.h"
#import "ARImageData.h"
#import "ARCubemapGenerator.h"

@interface AREnvironmentProbeManager : NSObject {
    CGFloat _minimumProbeUpdateInterval;
    CGFloat _lastProbeUpdateTime;
    NSMutableArray *_initialProbeIdentifiers;
    NSMutableArray *_anchorsToRemove;
    NSMutableDictionary *_probesByIdentifier;
    NSMutableDictionary *_probeIdentifiersByPlaneIdentifier;
    NSMutableArray *_requestedProbeIdentifiers;
    NSMutableArray *_updatedProbeIdentifiers;
    NSMutableArray *_directTexturingIdentifiers;
    NSUUID *_universeProbeIdentifier;
    NSObject<OS_dispatch_semaphore> *_textureDataSemaphore;
    NSMutableArray *_probeUpdateQueue;
    AREnvironmentProbeUpdate *_currentProbeUpdate;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    ARImageData *_lastImageData;
    ? _lastCameraTransform;
    ? _lastPlanes;
    ARCubemapGenerator *_cubemapGenerator;
    BOOL _isReady;
}


@property (readonly, nonatomic) NSInteger mode; // ivar: _mode


-(?)updateProbesForTimestamp:(?)arg0 planes:(?)arg1 imageData:(?)arg2 poseenableDirectTexturingForProbesWithIdentifier;
-(BOOL)_textureDataIsBusy;
-(BOOL)addProbeWithAnchor:(id)arg0 timestamp:(CGFloat)arg1 textureImmediately:(BOOL)arg2 ;
-(BOOL)isBusy;
-(id)_fullDescription;
-(id)initWithMode:(NSInteger)arg0 ;
-(void)insertIntoQueue:(id)arg0 ;
-(void)requestTextureForProbe:(id)arg0 ;
-(void)updateProbesFromExistingAnchors:(id)arg0 ;


@end


#endif