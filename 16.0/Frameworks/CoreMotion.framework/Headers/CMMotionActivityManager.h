// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMMOTIONACTIVITYMANAGER_H
#define CMMOTIONACTIVITYMANAGER_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMMotionActivityManager : NSObject {
    *void fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    id *fHandler;
    NSOperationQueue *fHandlerQueue;
}




+(BOOL)isActivityAvailable;
+(BOOL)isActivityLiteAvailable;
+(NSInteger)authorizationStatus;
-(id)init;
-(void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> )arg0 onQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)dealloc;
-(void)queryActivityStartingFromDate:(id)arg0 toDate:(id)arg1 toQueue:(id)arg2 withHandler:(id)arg3 ;
-(void)startActivityLiteUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startActivityUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)stopActivityLiteUpdates;
-(void)stopActivityUpdates;


@end


#endif