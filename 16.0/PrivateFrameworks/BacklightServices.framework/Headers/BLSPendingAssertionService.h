// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSPENDINGASSERTIONSERVICE_H
#define BLSPENDINGASSERTIONSERVICE_H

@class NSMutableArray, NSString;
@protocol BLSAssertionService;

#import <Foundation/Foundation.h>


@interface BLSPendingAssertionService : NSObject <BLSAssertionService>

 {
    NSMutableArray *_assertionsToAcquire;
    id<BLSAssertionService> *_replacementService;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)acquireAssertion:(id)arg0 ;
-(void)cancelAssertion:(id)arg0 withError:(id)arg1 ;
-(void)replaceWithService:(id)arg0 ;
-(void)restartAssertionTimeoutTimer:(id)arg0 ;


@end


#endif