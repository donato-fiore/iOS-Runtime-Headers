// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERACTIONPREDICTIONCONTAINER_H
#define HMDUSERACTIONPREDICTIONCONTAINER_H

@class HMFObject, HMFUnfairLock, NSArray, NSMutableArray;



@interface HMDUserActionPredictionContainer : HMFObject {
    HMFUnfairLock *_lock;
    BOOL _sortedPredictionsByServiceGroupNeedsUpdate;
}


@property (readonly, copy) NSArray *allPredictions;
@property (retain, nonatomic) NSMutableArray *sortedPredictionGroups; // ivar: _sortedPredictionGroups
@property (copy) NSArray *sortedPredictionsByServiceGroup; // ivar: _sortedPredictionsByServiceGroup


-(NSUInteger)_insertPredictionGroup:(id)arg0 ;
-(NSUInteger)addOrUpdatePrediction:(id)arg0 ;
-(NSUInteger)removePrediction:(id)arg0 ;
-(id)_movePrediction:(id)arg0 fromGroup:(id)arg1 intoGroup:(id)arg2 ;
-(id)createPredictionGroupForPrediction:(id)arg0 ;
-(id)init;


@end


#endif