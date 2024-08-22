// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TROPERATION_H
#define TROPERATION_H

@class NSOperation, NSError, NSDictionary;
@protocol OS_dispatch_semaphore;


#import "TRSession.h"

@interface TROperation : NSOperation

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSDictionary *result; // ivar: _result
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (retain, nonatomic) TRSession *session; // ivar: _session


+(id)userCancelledError;
-(id)initWithSession:(id)arg0 ;
-(void)execute;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithResult:(id)arg0 ;
-(void)main;


@end


#endif