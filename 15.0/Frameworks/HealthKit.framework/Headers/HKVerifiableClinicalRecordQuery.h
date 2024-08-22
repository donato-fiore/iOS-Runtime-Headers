// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKVERIFIABLECLINICALRECORDQUERY_H
#define HKVERIFIABLECLINICALRECORDQUERY_H

@class NSString, NSArray;
@protocol HKVerifiableClinicalRecordQueryClientInterface;


#import "HKQuery.h"

@interface HKVerifiableClinicalRecordQuery : HKQuery <HKVerifiableClinicalRecordQueryClientInterface>

 {
    id *_resultsHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *recordTypes; // ivar: _recordTypes
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithRecordTypes:(id)arg0 predicate:(id)arg1 resultsHandler:(id)arg2 ;
-(void)client_deliverVerifiableClinicalRecords:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif