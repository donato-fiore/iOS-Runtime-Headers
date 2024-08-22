// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFTRIGGER_H
#define _MKFTRIGGER_H

@class MKFModel, NSArray, NSSet, NSNumber, NSString, NSUUID, NSDate, NSData;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTrigger, MKFTriggerPrivateExtensions, MKFHome, MKFUser;


#import "MKFTriggerDatabaseID.h"
#import "_MKFHome.h"
#import "_MKFUser.h"

@interface _MKFTrigger : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFTrigger, MKFTriggerPrivateExtensions>



@property (retain, nonatomic) NSArray *actionSets;
@property (retain, nonatomic) NSSet *actionSets_;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSNumber *autoDelete;
@property (copy, nonatomic) NSString *configuredName;
@property (copy, nonatomic) NSString *configuredName;
@property (readonly, copy, nonatomic) MKFTriggerDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (retain, nonatomic) _MKFHome *home;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _MKFUser *owner;
@property (retain, nonatomic) NSObject<MKFUser> *owner;
@property (retain, nonatomic) NSData *recurrences;
@property (retain, nonatomic) NSData *recurrences;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfTrigger;
-(void)addActionSetsObject:(id)arg0 ;
-(void)removeActionSetsObject:(id)arg0 ;


@end


#endif