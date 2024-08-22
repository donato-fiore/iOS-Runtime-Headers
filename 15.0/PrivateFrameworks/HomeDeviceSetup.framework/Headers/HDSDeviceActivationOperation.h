// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSDEVICEACTIVATIONOPERATION_H
#define HDSDEVICEACTIVATIONOPERATION_H

@class SFSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDSDeviceActivationOperation : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) CGFloat metricTotalSeconds; // ivar: _metricTotalSeconds
@property (retain, nonatomic) SFSession *sfSession; // ivar: _sfSession
@property (nonatomic) NSUInteger startTicks; // ivar: _startTicks


-(void)_beginActivationWithCompletion:(id)arg0 ;
-(void)_checkActivationStateWithCompletion:(id)arg0 ;
-(void)_continueActivationWithSessionData:(id)arg0 completion:(id)arg1 ;
-(void)_finishActivation:(id)arg0 responseHeader:(id)arg1 completion:(id)arg2 ;
-(void)_finishWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)_performActivationWithCompletion:(id)arg0 ;
-(void)_sendActivationURLRequest:(id)arg0 completion:(id)arg1 ;
-(void)activate;


@end


#endif