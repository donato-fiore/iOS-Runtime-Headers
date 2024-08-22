// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBABMODULEIOS_H
#define CBABMODULEIOS_H

@class NSMutableArray, NSString;
@protocol CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol, CBAODProtocol;


#import "CBModule.h"
#import "CBDisplayModuleiOS.h"
#import "AABRear.h"
#import "CBGrimaldiModule.h"
#import "CBALSTelemetry.h"

@interface CBABModuleiOS : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol, CBAODProtocol>

 {
    *void _AABC;
    CBDisplayModuleiOS *_display;
    AABRear *_AABRear;
    CBGrimaldiModule *_Grimaldi;
    NSMutableArray *_alsServiceClients;
    NSMutableArray *_otherServiceClients;
    CBALSTelemetry *_alsTelemetry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)handleAODStateUpdate:(NSUInteger)arg0 transitionTime:(float)arg1 context:(id)arg2 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldMitigateHarmony:(struct __IOHIDServiceClient *)arg0 ;
-(id)copyIdentifiers;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(id)initWithDisplayModule:(id)arg0 andQueue:(id)arg1 ;
-(void)dealloc;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif