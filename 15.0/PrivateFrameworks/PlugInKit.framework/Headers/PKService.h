// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSERVICE_H
#define PKSERVICE_H

@class NSString, NSMutableDictionary, NSXPCListener, NSArray;
@protocol NSXPCListenerDelegate, PKServiceDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKServicePersonality.h"

@interface PKService : NSObject <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<PKServiceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property unsigned int extensionPointPlatform; // ivar: _extensionPointPlatform
@property (retain) NSObject<OS_dispatch_source> *firstHostRequestTimer; // ivar: _firstHostRequestTimer
@property (readonly) NSUInteger hash;
@property BOOL isSystemService; // ivar: _isSystemService
@property (retain) NSMutableDictionary *personalities; // ivar: _personalities
@property (readonly) os_unfair_lock_s personalityLock; // ivar: _personalityLock
@property (retain) NSXPCListener *serviceListener; // ivar: _serviceListener
@property BOOL shared; // ivar: _shared
@property (retain) PKServicePersonality *solePersonality; // ivar: _solePersonality
@property (retain) NSArray *subsystems; // ivar: _subsystems
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_source> *terminationTimer; // ivar: _terminationTimer
@property (readonly) NSObject<OS_dispatch_queue> *timerQueue; // ivar: _timerQueue


+(id)defaultService;
+(int)_defaultRun:(int)arg0 arguments:(*char *)arg1 ;
+(void)main;
-(BOOL)_processDefaultSubsystemName:(id)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)unregisterPersonality:(id)arg0 ;
-(id)configuredSubsystemList;
-(id)connectionForPlugInNamed:(id)arg0 ;
-(id)defaultsForPlugInNamed:(id)arg0 ;
-(id)discoverSubsystemNamed:(id)arg0 options:(id)arg1 required:(BOOL)arg2 ;
-(id)embeddedPrincipalForPlugInNamed:(id)arg0 ;
-(id)hostPrincipalForPlugInNamed:(id)arg0 ;
-(id)init;
-(id)personalityNamed:(id)arg0 ;
-(id)personalityNamed:(id)arg0 forHostPid:(int)arg1 ;
-(id)plugInPrincipalForPlugInNamed:(id)arg0 ;
-(void)_prepareToRun;
-(void)beganUsingServicePersonality:(id)arg0 ;
-(void)cancelTermination;
-(void)checkEnvironment:(id)arg0 ;
-(void)checkIn;
-(void)copyAppStoreReceipt:(id)arg0 ;
-(void)discoverSubsystems;
-(void)launchContainingApplicationForPlugInNamed:(id)arg0 ;
-(void)mergeSubsystemList:(id)arg0 from:(id)arg1 ;
-(void)mergeSubsystems:(id)arg0 from:(id)arg1 ;
-(void)registerPersonality:(id)arg0 ;
-(void)run;
-(void)scheduleTermination:(CGFloat)arg0 ;


@end


#endif