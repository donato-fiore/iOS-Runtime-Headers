// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMWIDGETDATAVIEWFETCHMODELINVOCATIONRESULT_H
#define REMWIDGETDATAVIEWFETCHMODELINVOCATIONRESULT_H

@class REMStoreInvocationResult;



@interface REMWidgetDataViewFetchModelInvocationResult : REMStoreInvocationResult {
    ? accountStorages;
    ? listStorages;
    ? reminderStorages;
    ? additionalReminderCount;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif