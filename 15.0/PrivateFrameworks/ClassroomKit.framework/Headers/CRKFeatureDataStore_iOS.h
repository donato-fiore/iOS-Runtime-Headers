// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFEATUREDATASTORE_IOS_H
#define CRKFEATUREDATASTORE_IOS_H

@class NSSet, NSString;
@protocol CRKSharedFeatureDataStoreProviding, CRKFeatureDataStoreProtocol;

#import <Foundation/Foundation.h>


@interface CRKFeatureDataStore_iOS : NSObject <CRKSharedFeatureDataStoreProviding, CRKFeatureDataStoreProtocol>



@property (readonly, copy, nonatomic) NSSet *activeClassroomRoles;
@property (readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) BOOL classroomAutomaticClassJoiningForced;
@property (nonatomic, getter=isClassroomInstructorRoleEnabled) BOOL classroomInstructorRoleEnabled;
@property (readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) BOOL classroomRequestPermissionToLeaveClassesForced;
@property (nonatomic, getter=isClassroomStudentRoleEnabled) BOOL classroomStudentRoleEnabled;
@property (readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) BOOL classroomUnpromptedScreenObservationForced;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)crkBoolTypeFromMCBoolType:(int)arg0 ;
+(id)sharedDataStore;
-(NSUInteger)boolRestrictionForFeature:(id)arg0 ;
-(NSUInteger)effectiveBoolValueForSetting:(id)arg0 outAsk:(*BOOL)arg1 ;
-(NSUInteger)effectiveValueForSetting:(id)arg0 configurationUUID:(id)arg1 outAsk:(*BOOL)arg2 ;
-(void)setBoolValue:(BOOL)arg0 ask:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setBoolValue:(BOOL)arg0 ask:(BOOL)arg1 forSetting:(id)arg2 configurationUUID:(id)arg3 ;


@end


#endif