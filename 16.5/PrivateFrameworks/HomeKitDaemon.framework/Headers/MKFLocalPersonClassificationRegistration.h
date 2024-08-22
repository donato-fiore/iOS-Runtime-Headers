// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKFLOCALPERSONCLASSIFICATIONREGISTRATION_H
#define MKFLOCALPERSONCLASSIFICATIONREGISTRATION_H

@class NSUUID;


#import "HMDManagedObject.h"
#import "MKFLocalPersonClassificationSettings.h"

@interface MKFLocalPersonClassificationRegistration : HMDManagedObject

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSUUID *personUUID;
@property (retain, nonatomic) MKFLocalPersonClassificationSettings *settings;


+(id)fetchPersonClassificationRegistrationForPersonUUID:(id)arg0 settingsModelUUID:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)fetchRequest;


@end


#endif