// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CATARBITRATORREGISTRATIONENTRY_H
#define _CATARBITRATORREGISTRATIONENTRY_H

@class NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CATArbitratorRegistrationEntry : NSObject {
    id *mResource;
    NSUInteger mMaxConcurrentCount;
    NSMutableArray *mPendingWaits;
    NSObject<OS_dispatch_source> *mPendingWaitsSource;
    NSObject<OS_dispatch_queue> *mPendingWaitsQueue;
}


@property (readonly, nonatomic) NSUInteger currentCount; // ivar: _currentCount


-(id)initWithResource:(id)arg0 maxConcurrentCount:(NSUInteger)arg1 ;
-(id)makeResourceProxyIfPossible:(BOOL)arg0 ;
-(id)makeResourceProxyIfPossibleWithoutLocking:(BOOL)arg0 ;
-(id)waitForResourceWithExclusive:(BOOL)arg0 group:(id)arg1 ;
-(void)invalidate;
-(void)pendingWaitsNeedServicing;
-(void)resourceProxyDidInvalidate:(id)arg0 ;
-(void)servicePendingWaitTokens;


@end


#endif