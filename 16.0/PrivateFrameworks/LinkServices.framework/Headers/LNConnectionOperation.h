// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNCONNECTIONOPERATION_H
#define LNCONNECTIONOPERATION_H

@class LNConnection<LNConnectionOperationDelegate>, NSUUID;
@protocol OS_os_activity, LNConnectionHostInterface;

#import <Foundation/Foundation.h>

#import "LNWatchdogTimer.h"

@interface LNConnectionOperation : NSObject {
    id *_activityProvider;
    NSObject<OS_os_activity> *_activity;
}


@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) LNConnection<LNConnectionOperationDelegate> *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<LNConnectionHostInterface> *connectionInterface; // ivar: _connectionInterface
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) LNWatchdogTimer *requestTimer; // ivar: _requestTimer


-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 connectionInterface:(id)arg1 priority:(NSInteger)arg2 activity:(id)arg3 ;
-(void)cancelTimeout;
-(void)extendTimeout;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif