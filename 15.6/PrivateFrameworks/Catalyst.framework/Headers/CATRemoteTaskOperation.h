// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATREMOTETASKOPERATION_H
#define CATREMOTETASKOPERATION_H

@class NSError, NSNumber;


#import "CATTaskOperation.h"
#import "CATTaskClient.h"

@interface CATRemoteTaskOperation : CATTaskOperation {
    NSError *mClientError;
}


@property (readonly, nonatomic) CATTaskClient *client; // ivar: _client
@property (copy, nonatomic) NSNumber *remotePhase; // ivar: _remotePhase


+(BOOL)isCancelable;
+(id)invalidRemoteTaskWithRequest:(id)arg0 error:(id)arg1 ;
-(BOOL)isAsynchronous;
-(id)initWithRequest:(id)arg0 client:(id)arg1 ;
-(id)initWithRequest:(id)arg0 clientError:(id)arg1 ;
-(void)cancel;
-(void)cancelOperationIfNeeded;
-(void)clientFailedWithError:(id)arg0 ;
-(void)fetchProgress;
-(void)main;
-(void)operationWillFinish;
-(void)postNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)processMessage:(id)arg0 ;
-(void)processNotificationWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)updateCompletedUnitCount:(NSInteger)arg0 andTotalUnitCount:(NSInteger)arg1 ;
-(void)updateProgressWithRemoteProgress:(id)arg0 ;


@end


#endif