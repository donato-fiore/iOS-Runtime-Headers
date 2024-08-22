// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMACTIVITYALARMPROXY_H
#define CMACTIVITYALARMPROXY_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMActivityAlarmProxy : NSObject {
    id *_internal;
    *void fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary *fAlarms;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    BOOL fAlarmAvailable;
}




+(id)sharedInstance;
-(BOOL)activityAlarmAvailable;
-(id)init;
-(void)dealloc;
-(void)listenForActivityAlarm:(id)arg0 ;
-(void)stopListeningForActivityAlarm:(id)arg0 ;


@end


#endif