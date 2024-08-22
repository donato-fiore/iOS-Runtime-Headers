// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDKITOPERATIONRETRYMANAGER_H
#define WBSCLOUDKITOPERATIONRETRYMANAGER_H

@class NSDate;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSCloudKitOperationRetryManager : NSObject {
    NSDate *_dateRetryWasFirstRequested;
}


@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSUInteger numberOfRetries; // ivar: _numberOfRetries
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleQueue; // ivar: _scheduleQueue
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(NSInteger)scheduleRetryIfNeededForError:(id)arg0 usingBlock:(id)arg1 ;
-(id)init;
-(id)initWithLog:(id)arg0 ;


@end


#endif