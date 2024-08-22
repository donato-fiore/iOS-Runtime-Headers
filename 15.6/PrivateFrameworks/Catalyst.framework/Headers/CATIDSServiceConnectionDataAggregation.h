// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATIDSSERVICECONNECTIONDATAAGGREGATION_H
#define CATIDSSERVICECONNECTIONDATAAGGREGATION_H

@class NSMutableDictionary, NSMutableSet, NSNumber, NSData;
@protocol OS_dispatch_queue, CATIDSServiceConnectionDataAggregationDelegate;

#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionDataAggregation : NSObject {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSMutableDictionary *mDataSegmentsBySegmentNumber;
    NSMutableSet *mPendingSegmentNumbers;
    NSNumber *mStartingSequenceNumber;
    NSNumber *mTotalSegments;
    BOOL mPerformedInitialHydration;
}


@property (nonatomic) NSUInteger dataNumber; // ivar: _dataNumber
@property (weak, nonatomic) NSObject<CATIDSServiceConnectionDataAggregationDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSData *totalData; // ivar: _totalData


-(id)description;
-(id)initWithWorkQueue:(id)arg0 ;
-(id)pendingSequenceNumbersDescription;
-(void)finishAggregating;
-(void)hydratePendingNumbersWithContent:(id)arg0 ;
-(void)hydrateStartingSequenceNumber:(id)arg0 ;
-(void)hydrateWithContentIfNeededWithContent:(id)arg0 ;
-(void)updateWithDataContent:(id)arg0 ;


@end


#endif