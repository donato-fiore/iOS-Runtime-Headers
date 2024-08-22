// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(void)paginateDatesIntoDatesFrom:(id)arg0 datesTo:(id)arg1 start:(id)arg2 end:(id)arg3 intervalLength:(CGFloat)arg4 ;
-(BOOL)isActivity:(id)arg0 sustainedForAttribute:(NSInteger)arg1 ;
-(BOOL)isTimeFromActivity:(id)arg0 toActivity:(id)arg1 withinLimitForAttribute:(NSInteger)arg2 ;
-(id)init;
-(void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> )arg0 onQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)dealloc;
-(void)queryActivityStartingFromDate:(id)arg0 toDate:(id)arg1 toQueue:(id)arg2 withHandler:(id)arg3 ;
-(void)queryActivityWithAttribute:(NSInteger)arg0 fromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(id)arg4 ;
-(void)startActivityLiteUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startActivityUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)startPeriodicActivityUpdatesToQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)stopActivityLiteUpdates;
-(void)stopActivityUpdates;
-(void)stopPeriodicActivityUpdates;


@end


#endif