// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNCONNECTIONOPERATION_H
#define LNCONNECTIONOPERATION_H

@class LNConnection<LNConnectionOperationDelegate>, NSUUID;
@protocol OS_os_activity;

#import <Foundation/Foundation.h>

#import "LNWatchdogTimer.h"

@interface LNConnectionOperation : NSObject {
    id *_activityProvider;
    NSObject<OS_os_activity> *_activity;
}


@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) LNConnection<LNConnectionOperationDelegate> *connection; // ivar: _connection
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) LNWatchdogTimer *requestTimer; // ivar: _requestTimer
@property (readonly, nonatomic) CGFloat timeout;


-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 priority:(NSInteger)arg1 activity:(id)arg2 ;
-(void)cancelTimeout;
-(void)extendTimeout;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif