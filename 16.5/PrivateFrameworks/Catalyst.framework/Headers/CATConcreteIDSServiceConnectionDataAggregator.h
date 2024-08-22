// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATCONCRETEIDSSERVICECONNECTIONDATAAGGREGATOR_H
#define CATCONCRETEIDSSERVICECONNECTIONDATAAGGREGATOR_H

@class NSMutableDictionary, NSMutableIndexSet;
@protocol CATIDSServiceConnectionDataAggregationDelegate, CATIDSServiceConnectionDataAggregator, OS_dispatch_queue, CATTimerSource, CATTimer, CATIDSServiceConnectionDataAggregatorDelegate;

#import <Foundation/Foundation.h>


@interface CATConcreteIDSServiceConnectionDataAggregator : NSObject <CATIDSServiceConnectionDataAggregationDelegate, CATIDSServiceConnectionDataAggregator>

 {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    id<CATTimerSource> *mTimerSource;
    CGFloat mMissingItemInterval;
    BOOL mSupportsSequenceCorrection;
    NSMutableDictionary *mAggregationsByDataNumber;
    NSUInteger mNextDeploymentNumber;
    NSUInteger mNextExpectedSequenceNumber;
    NSUInteger mGreatestExpectedSequenceNumber;
    NSMutableIndexSet *mPendingSequenceNumbers;
    id<CATTimer> *mMissingContentTimer;
}


@property (weak, nonatomic) NSObject<CATIDSServiceConnectionDataAggregatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger receivedSequenceNumber;


+(id)missingContentTimerIdentifier;
-(id)description;
-(id)initWithWorkQueue:(id)arg0 timerSource:(id)arg1 missingItemInterval:(CGFloat)arg2 supportsSequenceCorrection:(BOOL)arg3 ;
-(id)missingSequenceNumbers;
-(void)dataAggregationCompleted:(id)arg0 ;
-(void)missingContentTimerDidFire:(id)arg0 fireCount:(NSUInteger)arg1 ;
-(void)processNewDataWindowWithContent:(id)arg0 ;
-(void)receiveDataContent:(id)arg0 ;
-(void)receiveExpectedSequenceNumber:(NSUInteger)arg0 ;
-(void)updateExistingDataWindowWithContent:(id)arg0 ;
-(void)updateMissingContentTrackingForDataContent:(id)arg0 ;


@end


#endif