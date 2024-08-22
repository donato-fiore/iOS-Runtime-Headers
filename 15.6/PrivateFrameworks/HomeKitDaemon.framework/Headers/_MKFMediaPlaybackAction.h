// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFMEDIAPLAYBACKACTION_H
#define _MKFMEDIAPLAYBACKACTION_H

@class MKFAction, NSArray, NSSet, NSString, MPPlaybackArchive, NSUUID, NSNumber, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaPlaybackAction, MKFMediaPlaybackActionPrivateExtensions, MKFActionSet, MKFHome;


#import "MKFMediaPlaybackActionDatabaseID.h"

@interface _MKFMediaPlaybackAction : MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMediaPlaybackAction, MKFMediaPlaybackActionPrivateExtensions>



@property (readonly, retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) NSSet *accessories_;
@property (readonly, retain, nonatomic) NSObject<MKFActionSet> *actionSet;
@property (readonly, copy, nonatomic) MKFMediaPlaybackActionDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *profiles;
@property (retain, nonatomic) NSSet *services;
@property (retain, nonatomic) NSSet *services;
@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *state;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSNumber *volume;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(id)castIfMediaPlaybackAction;
-(void)addAccessoriesObject:(id)arg0 ;
-(void)removeAccessoriesObject:(id)arg0 ;


@end


#endif