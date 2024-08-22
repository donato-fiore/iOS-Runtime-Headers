// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHSERVICE_H
#define BLSHSERVICE_H

@protocol BLSHInactiveBudgetPolicing, BLSHServicePlatformProvider;

#import <Foundation/Foundation.h>

#import "BLSHAssertionService.h"
#import "BLSHBacklightOSInterfaceProvider.h"
#import "BLSHBacklightService.h"
#import "BLSHDefaultsObserver.h"
#import "BLSHLocalAssertionService.h"

@interface BLSHService : NSObject {
    BLSHAssertionService *_assertionService;
    BLSHBacklightOSInterfaceProvider *_osInterfaceProvider;
    BLSHBacklightService *_backlightService;
    BLSHDefaultsObserver *_defaultsObserver;
}


@property (readonly, nonatomic) NSObject<BLSHInactiveBudgetPolicing> *inactiveBudgetPolicy; // ivar: _inactiveBudgetPolicy
@property (readonly, nonatomic) BLSHLocalAssertionService *localAssertionService;
@property (readonly, nonatomic) NSObject<BLSHServicePlatformProvider> *platformProvider; // ivar: _platformProvider


+(id)sharedService;
+(id)startServiceWithPlatformProvider:(id)arg0 ;
+(void)earlyInitialization;
-(id)initWithPlatformProvider:(id)arg0 ;
-(void)beginSpecialManagementForHostEnvironment:(id)arg0 ;
-(void)deregisterSceneWorkspace:(id)arg0 ;
-(void)registerSceneWorkspace:(id)arg0 ;


@end


#endif