// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUCORESPLUNKHISTORY_H
#define SUCORESPLUNKHISTORY_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUCoreSplunkHistory : NSObject

@property (retain, nonatomic) NSString *lastUUID; // ivar: _lastUUID
@property int lockFD; // ivar: _lockFD
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *splunkHistoryQueue; // ivar: _splunkHistoryQueue


+(id)sharedHistory;
+(void)logEventUUID:(id)arg0 ;
-(id)init;
-(int)setupLogFile;
-(void)acquireSharedLock;
-(void)dealloc;
-(void)releaseSharedLock;
-(void)safeWriteEventUUID:(id)arg0 ;


@end


#endif