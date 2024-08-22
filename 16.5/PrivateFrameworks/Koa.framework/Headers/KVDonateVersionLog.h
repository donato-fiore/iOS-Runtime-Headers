// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVDONATEVERSIONLOG_H
#define KVDONATEVERSIONLOG_H

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface KVDonateVersionLog : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_log;
    NSURL *_logFileURL;
}




-(NSUInteger)incrementVersionForItemType:(NSInteger)arg0 originAppId:(id)arg1 deviceId:(id)arg2 userId:(id)arg3 ;
-(id)init;
-(id)initWithQueue:(id)arg0 directoryPath:(id)arg1 ;


@end


#endif