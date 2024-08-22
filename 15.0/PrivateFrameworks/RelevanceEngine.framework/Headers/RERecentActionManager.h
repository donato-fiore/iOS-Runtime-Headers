// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERECENTACTIONMANAGER_H
#define RERECENTACTIONMANAGER_H

@class NSLock, NSMutableDictionary;


#import "RESingleton.h"
#import "REPredictedActionServer.h"

@interface RERecentActionManager : RESingleton {
    NSLock *_lock;
    NSMutableDictionary *_dateValues;
    REPredictedActionServer *_server;
}




-(BOOL)actionWasPerformedLocally:(id)arg0 ;
-(NSUInteger)actionNumberOfTimesPeformedToday:(id)arg0 ;
-(id)_dataForAction:(id)arg0 ;
-(id)_init;
-(id)lastPerformedDateForAction:(id)arg0 ;
-(void)_handleRecentActionNotification:(id)arg0 ;
-(void)_storePerformAction:(id)arg0 date:(id)arg1 remote:(BOOL)arg2 ;
-(void)dealloc;
-(void)didPerformAction:(id)arg0 ;


@end


#endif