// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXCALLCONTROLLER_H
#define CXCALLCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CXCallObserver.h"

@interface CXCallController : NSObject

@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_requestTransaction:(id)arg0 completion:(id)arg1 ;
-(void)requestTransaction:(id)arg0 completion:(id)arg1 ;
-(void)requestTransactionWithAction:(id)arg0 completion:(id)arg1 ;
-(void)requestTransactionWithActions:(id)arg0 completion:(id)arg1 ;


@end


#endif