// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARENVIRONMENTTEXTURINGTECHNIQUE_H
#define ARENVIRONMENTTEXTURINGTECHNIQUE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "ARTechnique.h"
#import "ARPlaneWorld.h"
#import "ARImageData.h"
#import "AREnvironmentProbeManager.h"

@interface AREnvironmentTexturingTechnique : ARTechnique {
    ARPlaneWorld *_planeWorld;
    NSObject<OS_dispatch_queue> *_planeUpdateQueue;
    NSObject<OS_dispatch_queue> *_networkPrewarmQueue;
    ARImageData *_ultraWide;
    NSObject<OS_dispatch_semaphore> *_ultraWideSemaphore;
}


@property BOOL networkIntialized; // ivar: _networkIntialized
@property (retain) AREnvironmentProbeManager *probeManager; // ivar: _probeManager
@property (readonly) BOOL wantsHDREnvironmentTextures; // ivar: _wantsHDREnvironmentTextures


+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(NSUInteger)requiredSensorDataTypes;
-(id)_fullDescription;
-(id)initWithOptions:(NSInteger)arg0 wantsHDREnvironmentTextures:(BOOL)arg1 ;
-(id)processData:(id)arg0 ;
-(void)prepare:(BOOL)arg0 ;
-(void)reconfigureFrom:(id)arg0 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;


@end


#endif