// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GPUPERFORMANCESTATEDEFAULT_H
#define GPUPERFORMANCESTATEDEFAULT_H

@protocol AGXConsistentStateDevice;


#import "COCondition.h"
#import "ApplePMPPerfStateControl.h"

@interface GPUPerformanceStateDefault : COCondition {
    id<AGXConsistentStateDevice> *_consistentDevice;
    unsigned int _acceleratorService;
    unsigned int _connection;
    unsigned int _performanceLevel;
    ApplePMPPerfStateControl *_applePMPPerfStateControl;
}


@property (nonatomic) unsigned int desiredGPUPerformanceState; // ivar: _desiredGPUPerformanceState


+(BOOL)supportsConsistentStateDevice:(id)arg0 ;
+(id)consistentStateDevice;
+(id)description;
+(id)perfLevelEnumToGPUStateStringKey:(unsigned int)arg0 ;
+(id)profileFriendlyName;
+(unsigned int)ioAccelerator;
-(BOOL)_acquireLock;
-(BOOL)_setConsistentPerformanceLevel;
-(BOOL)active;
-(BOOL)isDestructive;
-(BOOL)isInternalOnly;
-(BOOL)setUp;
-(id)identifierName;
-(id)initWithGPUPerformanceState:(unsigned int)arg0 ;
-(id)userFriendlyName;
-(void)_cleanup;
-(void)_dumpCurrentState:(id)arg0 ;
-(void)tearDown;


@end


#endif