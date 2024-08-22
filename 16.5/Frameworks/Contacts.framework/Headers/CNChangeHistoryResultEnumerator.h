// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYRESULTENUMERATOR_H
#define CNCHANGEHISTORYRESULTENUMERATOR_H

@class NSEnumerator, CNQueue;
@protocol CNEnumeratorRefillStrategy;



@interface CNChangeHistoryResultEnumerator : NSEnumerator

@property (readonly, nonatomic) CNQueue *batchFetchQueue; // ivar: _batchFetchQueue
@property (readonly, copy, nonatomic) CNQueue *changes; // ivar: _changes
@property (readonly, nonatomic) NSObject<CNEnumeratorRefillStrategy> *refillStrategy; // ivar: _refillStrategy


+(id)contactEnumeratorWithChanges:(id)arg0 keysToFetch:(id)arg1 unifyResults:(BOOL)arg2 contactStore:(id)arg3 ;
+(id)groupEnumeratorWithChanges:(id)arg0 contactStore:(id)arg1 ;
-(id)initWithChanges:(id)arg0 refillStrategy:(id)arg1 ;
-(id)nextObject;
-(void)_fetchNextBatch;


@end


#endif