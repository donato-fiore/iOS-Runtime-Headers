// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSCHEDULEITEMQUERY_H
#define HKMEDICATIONSCHEDULEITEMQUERY_H

@class HKQuery, NSString, NSDate, NSArray;
@protocol HKMedicationScheduleItemQueryClientInterface;



@interface HKMedicationScheduleItemQuery : HKQuery <HKMedicationScheduleItemQueryClientInterface>

 {
    id *_resultsHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDate *toDate; // ivar: _toDate


+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg0 ;
-(id)initWithFromDate:(id)arg0 toDate:(id)arg1 identifier:(id)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(void)client_deliverScheduleItems:(id)arg0 queryUUID:(id)arg1 ;
-(void)queue_deliverError:(id)arg0 ;
-(void)queue_populateConfiguration:(id)arg0 ;
-(void)queue_queryDidDeactivate:(id)arg0 ;
-(void)queue_validate;


@end


#endif