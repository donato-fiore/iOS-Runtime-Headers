// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDBUDDYFLOWUSERINFO_H
#define WDBUDDYFLOWUSERINFO_H

@class NSMutableDictionary, NSDateComponents, NSString, NSNumber;
@protocol HKSimpleDataEntryItemDelegate, OS_dispatch_queue, WDBuddyFlowUserInfoDelegate;

#import <Foundation/Foundation.h>


@interface WDBuddyFlowUserInfo : NSObject <HKSimpleDataEntryItemDelegate>

 {
    NSMutableDictionary *_dataEntryItems;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSDateComponents *dateOfBirthComponents; // ivar: _dateOfBirthComponents
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WDBuddyFlowUserInfoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *heightInCm; // ivar: _heightInCm
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSNumber *originalHeightInCm; // ivar: _originalHeightInCm
@property (retain, nonatomic) NSNumber *originalWeightInKg; // ivar: _originalWeightInKg
@property (retain, nonatomic) NSNumber *sex; // ivar: _sex
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *weightInKg; // ivar: _weightInKg


+(id)buddyFlowUserInfoWithDemographicsInformation:(id)arg0 ;
-(id)_createDateOfBirthEntryItem;
-(id)_createSexEntryItem;
-(id)_dataEntryItemForRegistrantField:(NSUInteger)arg0 ;
-(id)_medicalIDName;
-(id)_todayBirthdayDateComponents;
-(id)defaultDataEntryItems;
-(id)init;
-(id)medicalIDRepresentation;
-(void)dataEntryItemDidUpdateValue:(id)arg0 ;
// -(void)saveChangesToHealthStore:(id)arg0 withMedicalIDTemplate:(id)arg1 withMedicalIDCompletion:(id)arg2 andSaveNameCompletion:(unk)arg3 andOverallCompletion:(id)arg4  ;


@end


#endif