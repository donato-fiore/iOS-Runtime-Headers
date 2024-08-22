// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVINSTANCEINFOLOG_H
#define CKVINSTANCEINFOLOG_H

@class KVDictionaryLog;

#import <Foundation/Foundation.h>


@interface CKVInstanceInfoLog : NSObject {
    KVDictionaryLog *_log;
}




-(id)deviceId;
-(id)init;
-(id)initWithDataDirectory:(id)arg0 dataProtectionClass:(int)arg1 ;
-(id)lastDatabaseCleanup;
-(id)lastMaintenance;
-(id)lastSkitRebuild;
-(id)modifiedDatabaseRowsSinceCleanup;
-(id)userId;
-(void)recordDatabaseCleanup;
-(void)recordDatabaseRowsModified:(NSUInteger)arg0 ;
-(void)recordDeviceId:(id)arg0 userId:(id)arg1 ;
-(void)recordMaintenance;
-(void)recordSkitRebuild;


@end


#endif