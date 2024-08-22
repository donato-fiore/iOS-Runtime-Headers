// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKANCHOREDOBJECTQUERY_H
#define HKANCHOREDOBJECTQUERY_H

@class NSMutableArray, NSString;
@protocol HKAnchoredObjectQueryClientInterface;


#import "HKQuery.h"
#import "HKQueryAnchor.h"

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface>

 {
    BOOL _initialHandlerCalled;
    NSMutableArray *_samplesPendingDelivery;
    NSMutableArray *_deletedObjectsPendingDelivery;
    uint8_t _includeDeletedObjects;
    HKQueryAnchor *_currentAnchor;
}


@property (copy, nonatomic) HKQueryAnchor *anchor; // ivar: _anchor
@property (nonatomic) CGFloat collectionInterval; // ivar: _collectionInterval
@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreDeletedObjects;
@property (nonatomic) BOOL includeAutomaticTimeZones; // ivar: _includeAutomaticTimeZones
@property (nonatomic) BOOL includeContributorInformation; // ivar: _includeContributorInformation
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithQueryDescriptors:(id)arg0 anchor:(id)arg1 limit:(NSInteger)arg2 resultsHandler:(id)arg3 ;
-(id)initWithType:(id)arg0 predicate:(id)arg1 anchor:(NSUInteger)arg2 limit:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(id)initWithType:(id)arg0 predicate:(id)arg1 anchor:(id)arg2 limit:(NSUInteger)arg3 resultsHandler:(id)arg4 ;
-(void)client_deliverSampleObjects:(id)arg0 deletedObjects:(id)arg1 anchor:(id)arg2 clearPendingSamples:(BOOL)arg3 deliverResults:(BOOL)arg4 query:(id)arg5 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif