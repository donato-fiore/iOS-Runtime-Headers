// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSAMPLECOUNTQUERY_H
#define HKSAMPLECOUNTQUERY_H

@class NSString, NSSet;
@protocol HKSampleCountQueryClientInterface;


#import "HKQuery.h"

@interface HKSampleCountQuery : HKQuery <HKSampleCountQueryClientInterface>

 {
    id *_resultsHandler;
    id *_sampleTypeCountResultsHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *sampleTypes;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithQueryDescriptors:(id)arg0 resultsHandler:(id)arg1 ;
-(id)initWithResultsHandler:(id)arg0 ;
-(id)initWithSampleType:(id)arg0 predicate:(id)arg1 resultsHandler:(id)arg2 ;
-(id)initWithSampleTypes:(id)arg0 predicate:(id)arg1 resultsHandler:(id)arg2 ;
-(void)client_deliverSampleCountDictionary:(id)arg0 forQuery:(id)arg1 ;
-(void)client_deliverSampleTypeCountDictionary:(id)arg0 forQuery:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif