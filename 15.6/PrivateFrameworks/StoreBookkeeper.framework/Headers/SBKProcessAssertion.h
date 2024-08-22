// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKPROCESSASSERTION_H
#define SBKPROCESSASSERTION_H

@class BKSProcessAssertion;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBKProcessAssertion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_expirationBlock;
}


@property (retain, nonatomic) BKSProcessAssertion *bkProcessAssertion; // ivar: _bkProcessAssertion
@property (retain, nonatomic) id *expirationObserver; // ivar: _expirationObserver
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier


-(id)description;
// -(id)initWithExpirationBlock:(id)arg0 debugDescription:(unk)arg1  ;
-(void)_expireBackgroundTask;
-(void)_onQueueSetBkProcessAssertion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif