// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMMOTIONALARMMANAGERINTERNAL_H
#define CMMOTIONALARMMANAGERINTERNAL_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMMotionAlarmManagerInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSMutableDictionary *fAlarms;
    BOOL fListening;
}




+(id)instance;
-(BOOL)_acknowledgeAlarm:(id)arg0 error:(*id)arg1 ;
-(BOOL)_launchRemoteAppWithError:(*id)arg0 delegate:(id)arg1 ;
-(BOOL)_registerAlarm:(id)arg0 error:(*id)arg1 ;
-(BOOL)_unregisterAlarm:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_handleAlarmFire:(id)arg0 ;
-(void)_startListeners;
-(void)_stopListeners;
-(void)_teardown;
-(void)dealloc;


@end


#endif