// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKUSERDOMAINCONCEPTQUERY_H
#define HKUSERDOMAINCONCEPTQUERY_H

@class NSArray, NSString;
@protocol HKUserDomainConceptQueryClientInterface;


#import "HKQuery.h"
#import "HKQueryAnchor.h"

@interface HKUserDomainConceptQuery : HKQuery <HKUserDomainConceptQueryClientInterface>

 {
    HKQueryAnchor *_anchor;
    NSUInteger _limit;
    NSArray *_sortDescriptors;
    id *_resultHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 anchor:(id)arg1 limit:(NSUInteger)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(void)_enumerateResultsWithHandler:(id)arg0 handler:(id)arg1 ;
-(void)client_deliverResults:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif