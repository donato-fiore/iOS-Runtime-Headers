// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKDATABASECHANGESQUERY_H
#define _HKDATABASECHANGESQUERY_H

@class NSString, NSArray;
@protocol HKDatabaseChangesQueryClientInterface;


#import "HKQuery.h"
#import "HKQueryAnchor.h"

@interface _HKDatabaseChangesQuery : HKQuery <HKDatabaseChangesQueryClientInterface>



@property (readonly, copy, nonatomic) HKQueryAnchor *anchor; // ivar: _anchor
@property (nonatomic) NSInteger anchorStrategyChangeCountLimit; // ivar: _anchorStrategyChangeCountLimit
@property (nonatomic) NSInteger changeDetailsQueryStrategy; // ivar: _changeDetailsQueryStrategy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeChangeDetails; // ivar: _includeChangeDetails
@property (readonly, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (readonly, copy, nonatomic) NSArray *sampleTypes; // ivar: _sampleTypes
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
+(void)configureServerInterface:(id)arg0 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithTypes:(id)arg0 anchor:(id)arg1 resultsHandler:(id)arg2 ;
-(void)client_deliverQueryAnchor:(id)arg0 sampleTypeChanges:(id)arg1 queryUUID:(id)arg2 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;


@end


#endif