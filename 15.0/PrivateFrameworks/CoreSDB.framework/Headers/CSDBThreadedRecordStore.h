// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSDBTHREADEDRECORDSTORE_H
#define CSDBTHREADEDRECORDSTORE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_CSDBThreadObject.h"

@interface CSDBThreadedRecordStore : NSObject {
    *CSDBRecordStore _recordStore;
    NSObject<OS_dispatch_queue> *_recordStoreQueue;
    NSString *_identifier;
    _CSDBThreadObject *_thread;
    CSDBLookAsideBufferConfig _lookAsideConfig;
    BOOL _wantsRegister;
}




-(BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)arg0 ;
-(id)initWithIdentifier:(struct __CFString *)arg0 qosClass:(unsigned short)arg1 lookAsideConfig:(struct CSDBLookAsideBufferConfig )arg2 ;
-(void)_teardownDatabaseOnQueue;
-(void)dealloc;
// -(void)performBlock:(id)arg0 afterDelay:(unk)arg1  ;
// -(void)performBlock:(id)arg0 waitUntilDone:(unk)arg1  ;
-(void)registerClass:(struct ? *)arg0 ;
// -(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg0 pathBlock:(id)arg1 setupStoreHandler:(unk)arg2 connectionInitializer:(*unk)arg3 versionChecker:(*unk)arg4 migrationHandler:(*unk)arg5 schemaVersion:(*unk)arg6 dataProtectionClass:(int)arg7 registerBlock:(unsigned int)arg8  ;
// -(void)setupDatabaseWithAllowLocalMigration:(BOOL)arg0 pathBlock:(id)arg1 setupStoreHandler:(unk)arg2 connectionInitializer:(*unk)arg3 versionChecker:(*unk)arg4 migrationHandler:(*unk)arg5 schemaVersion:(*unk)arg6 dataProtectionClass:(int)arg7 registerBlock:(unsigned int)arg8 exclusiveOwnership:(id)arg9  ;
-(void)teardownDatabase;


@end


#endif