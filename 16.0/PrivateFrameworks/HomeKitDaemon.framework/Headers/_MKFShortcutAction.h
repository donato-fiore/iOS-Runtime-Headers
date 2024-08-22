// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKFSHORTCUTACTION_H
#define _MKFSHORTCUTACTION_H

@class MKFAction, NSData, NSString, NSUUID, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFShortcutAction, MKFShortcutActionPrivateExtensions, MKFActionSet, MKFHome;


#import "MKFShortcutActionDatabaseID.h"

@interface _MKFShortcutAction : MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFShortcutAction, MKFShortcutActionPrivateExtensions>



@property (readonly, retain, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) MKFShortcutActionDatabaseID *databaseID;
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


+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfShortcutAction;


@end


#endif