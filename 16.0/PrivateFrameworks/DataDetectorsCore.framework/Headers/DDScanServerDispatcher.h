// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDSCANSERVERDISPATCHER_H
#define DDSCANSERVERDISPATCHER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface DDScanServerDispatcher : NSObject {
    NSObject<OS_dispatch_queue> *_scannerQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_reportQueue;
    NSObject<OS_dispatch_source> *_memoryWarningSource;
    BOOL _memoryWarningInProgress;
    NSMutableDictionary *_scanners;
    BOOL _tearDownRequested;
    NSUInteger _jobIdentifier;
}




-(BOOL)reachedMaxSimultaneousTask;
-(NSInteger)emptyIdentifier;
-(NSInteger)scannerConf:(id)arg0 sync:(BOOL)arg1 shortTask:(BOOL)arg2 runTask:(id)arg3 ;
-(id)init;
-(id)reportQueue;
-(id)scannerListForConfiguration:(id)arg0 ;
-(void)cancelJob:(NSInteger)arg0 ;
-(void)dealloc;
-(void)recycleScanner:(id)arg0 fromList:(id)arg1 sameQueue:(BOOL)arg2 ;


@end


#endif