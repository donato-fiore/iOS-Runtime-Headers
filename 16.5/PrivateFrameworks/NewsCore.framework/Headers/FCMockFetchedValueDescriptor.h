// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCMOCKFETCHEDVALUEDESCRIPTOR_H
#define FCMOCKFETCHEDVALUEDESCRIPTOR_H

@class NSError, NSArray;
@protocol NFCopying;


#import "FCFetchedValueDescriptor.h"

@interface FCMockFetchedValueDescriptor : FCFetchedValueDescriptor

@property (copy, nonatomic) NSObject<NFCopying> *fastCachedValue; // ivar: _fastCachedValue
@property (copy, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (copy, nonatomic) NSObject<NFCopying> *fetchValue; // ivar: _fetchValue
@property (nonatomic) NSUInteger lastFetchCachePolicy; // ivar: _lastFetchCachePolicy
@property (nonatomic) NSInteger lastFetchQualityOfService; // ivar: _lastFetchQualityOfService
@property (readonly, copy, nonatomic) NSArray *myInputManagers; // ivar: _myInputManagers
@property (copy, nonatomic) id *valueEqualityTest; // ivar: _valueEqualityTest
@property (copy, nonatomic) id *willFetchBlock; // ivar: _willFetchBlock
@property (nonatomic) NSUInteger willFetchCount; // ivar: _willFetchCount


-(BOOL)isValue:(id)arg0 equalToValue:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithInputManagers:(id)arg0 ;
-(id)inputManagers;
-(void)fetchValueWithCachePolicy:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 completion:(id)arg2 ;
-(void)markDirty;


@end


#endif