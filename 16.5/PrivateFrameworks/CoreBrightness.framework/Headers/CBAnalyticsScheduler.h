// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBANALYTICSSCHEDULER_H
#define CBANALYTICSSCHEDULER_H

@class NSMutableDictionary;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBAnalyticsScheduler : NSObject {
    NSMutableDictionary *_requests;
    NSUInteger _requestId;
    NSObject<OS_os_log> *_logHandle;
}




+(id)sharedInstance;
-(NSInteger)registerHandler:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)removeHandler:(NSInteger)arg0 ;
-(void)run;


@end


#endif