// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERLOGCORE_H
#define POWERLOGCORE_H

@class NSDate;
@protocol OS_dispatch_source, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "PLAccountingOperator.h"
#import "PLCoreAgent.h"
#import "PPTCollectionOperator.h"
#import "PPTCoreStorage.h"
#import "PLCoreService.h"
#import "PLCoreStorage.h"

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}


@property (readonly) PLAccountingOperator *accounting; // ivar: _accounting
@property (readonly) PLCoreAgent *agents; // ivar: _agents
@property (readonly) PPTCollectionOperator *collection; // ivar: _collection
@property (readonly) PPTCoreStorage *coreStorage; // ivar: _coreStorage
@property (readonly) NSDate *launchDate; // ivar: _launchDate
@property (readonly) PLCoreService *services; // ivar: _services
@property (readonly) PLCoreStorage *storage; // ivar: _storage
@property (retain) NSObject<OS_os_transaction> *userRequestTransaction; // ivar: _userRequestTransaction


+(BOOL)allowRun;
+(BOOL)isAudioAccessory;
+(BOOL)isDebugEnabled;
+(BOOL)sharedCoreStarted;
+(BOOL)shouldSetupCore;
+(id)sharedCore;
+(void)deprecateOldFullMode;
+(void)setupCore;
-(id)init;
-(void)dealloc;
-(void)didRecieveMemoryPressureWarning;
-(void)setupForPreUnlockTelemetry;
-(void)startCore;
-(void)startCoreForTest;
-(void)stopCore;


@end


#endif