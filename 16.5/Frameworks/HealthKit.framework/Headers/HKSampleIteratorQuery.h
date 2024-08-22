// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSAMPLEITERATORQUERY_H
#define HKSAMPLEITERATORQUERY_H

@class NSMutableArray, NSString;
@protocol HKSampleIteratorQueryClientInterface;


#import "HKQuery.h"
#import "HKSampleIteratorQueryCursor.h"

@interface HKSampleIteratorQuery : HKQuery <HKSampleIteratorQueryClientInterface>

 {
    NSMutableArray *_samplesPendingDelivery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor; // ivar: _queryCursor
@property (readonly, copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)init;
-(id)initWithQueryCursor:(id)arg0 limit:(NSUInteger)arg1 resultsHandler:(id)arg2 ;
-(id)initWithQueryDescriptors:(id)arg0 sortDescriptors:(id)arg1 followingAnchor:(id)arg2 upToAndIncludingAnchor:(id)arg3 distinctByKeyPaths:(id)arg4 limit:(NSUInteger)arg5 resultsHandler:(id)arg6 ;
-(void)client_deliverSampleObjects:(id)arg0 queryCursor:(id)arg1 deliverResults:(BOOL)arg2 query:(id)arg3 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif