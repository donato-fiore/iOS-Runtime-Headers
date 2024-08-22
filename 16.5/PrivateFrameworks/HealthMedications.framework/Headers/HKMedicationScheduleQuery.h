// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSCHEDULEQUERY_H
#define HKMEDICATIONSCHEDULEQUERY_H

@class HKQuery, NSArray, NSString;
@protocol HKMedicationScheduleQueryClientInterface;



@interface HKMedicationScheduleQuery : HKQuery <HKMedicationScheduleQueryClientInterface>

 {
    id *_resultsHandler;
    NSArray *_sortDescriptors;
    NSUInteger _limit;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 limit:(NSUInteger)arg1 sortDescriptors:(id)arg2 resultsHandler:(id)arg3 ;
-(void)client_deliverSchedules:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif