// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFACTION_H
#define _MKFACTION_H

@class MKFModel, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAction, MKFActionPrivateExtensions, MKFActionSet, MKFHome;


#import "_MKFActionSet.h"
#import "MKFActionDatabaseID.h"

@interface _MKFAction : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAction, MKFActionPrivateExtensions>



@property (retain, nonatomic) _MKFActionSet *actionSet;
@property (readonly, retain, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (readonly, copy, nonatomic) MKFActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfAction;


@end


#endif