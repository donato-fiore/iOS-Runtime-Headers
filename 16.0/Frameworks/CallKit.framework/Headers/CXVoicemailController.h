// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXVOICEMAILCONTROLLER_H
#define CXVOICEMAILCONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CXVoicemailObserver.h"

@interface CXVoicemailController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly, nonatomic) CXVoicemailObserver *voicemailObserver; // ivar: _voicemailObserver


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_requestTransaction:(id)arg0 completion:(id)arg1 ;
-(void)requestTransaction:(id)arg0 completion:(id)arg1 ;
-(void)requestTransactionWithAction:(id)arg0 completion:(id)arg1 ;
-(void)requestTransactionWithActions:(id)arg0 completion:(id)arg1 ;


@end


#endif