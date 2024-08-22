// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCONCEPTQUERY_H
#define HKCONCEPTQUERY_H

@class NSString;
@protocol HKConceptQueryClientInterface;


#import "HKQuery.h"
#import "HKConceptSelection.h"

@interface HKConceptQuery : HKQuery <HKConceptQueryClientInterface>

 {
    HKConceptSelection *_selection;
    id *_handler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithConceptSelection:(id)arg0 resultsHandler:(id)arg1 ;
-(void)_enumerateConceptsWithHandler:(id)arg0 handler:(id)arg1 ;
-(void)client_deliverConcepts:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif