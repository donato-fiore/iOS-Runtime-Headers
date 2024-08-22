// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKFLOCALPERSONCLASSIFICATIONSETTINGS_H
#define MKFLOCALPERSONCLASSIFICATIONSETTINGS_H

@class NSSet, NSUUID;


#import "HMDManagedObject.h"

@interface MKFLocalPersonClassificationSettings : HMDManagedObject

@property (retain, nonatomic) NSSet *classificationRegistrations;
@property (copy, nonatomic) NSUUID *modelID;


+(id)fetchPersonClassificationSettingsForModelID:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)fetchRequest;


@end


#endif