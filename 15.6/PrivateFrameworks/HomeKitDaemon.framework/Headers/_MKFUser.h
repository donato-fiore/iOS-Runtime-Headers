// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKFUSER_H
#define _MKFUSER_H

@class MKFModel, NSNumber, NSArray, NSSet, NSString, NSUUID, NSDictionary, NSDate;
@protocol HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUser, MKFUserPrivateExtensions, MKFHome, MKFPresenceEvent, MKFAnnounceUserSettings;


#import "HMDAccountHandle.h"
#import "HMDAccountIdentifier.h"
#import "MKFUserDatabaseID.h"
#import "_MKFHome.h"
#import "_MKFPresenceEvent.h"
#import "_MKFAnnounceUserSettings.h"

@interface _MKFUser : MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUser, MKFUserPrivateExtensions>



@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (copy, nonatomic) NSNumber *announceAccessAllowed;
@property (copy, nonatomic) NSNumber *announceAccessAllowed;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (readonly, retain, nonatomic) NSArray *bulletinConditions;
@property (retain, nonatomic) NSSet *bulletinConditions_;
@property (copy, nonatomic) NSNumber *camerasAccessLevel;
@property (copy, nonatomic) NSNumber *camerasAccessLevel;
@property (copy, nonatomic) NSString *changeTag;
@property (copy, nonatomic) NSString *changeTag;
@property (readonly, copy, nonatomic) MKFUserDatabaseID *databaseID;
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
@property (readonly, retain, nonatomic) NSArray *pairedHAPAccessories;
@property (retain, nonatomic) NSSet *pairedHAPAccessories_;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, nonatomic) _MKFPresenceEvent *presenceEvent;
@property (readonly, retain, nonatomic) NSObject<MKFPresenceEvent> *presenceEvent;
@property (copy, nonatomic) NSNumber *presenceRegionStatus;
@property (copy, nonatomic) NSNumber *presenceRegionStatus;
@property (copy, nonatomic) NSDate *presenceUpdateTimeStamp;
@property (copy, nonatomic) NSDate *presenceUpdateTimeStamp;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) _MKFAnnounceUserSettings *settingsAnnounce;
@property (retain, nonatomic) NSObject<MKFAnnounceUserSettings> *settingsAnnounce;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (retain, nonatomic) NSSet *triggers_;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSDate *writerTimestamp;


+(Class)backingModelClass;
+(Class)cd_modelClass;
+(id)backingModelProtocol;
+(id)fetchRequest;
+(id)modelIDForParentRelationshipTo:(id)arg0 ;
-(BOOL)isOwner;
-(id)castIfUser;
-(id)findBulletinConditionsRelationWithModelID:(id)arg0 ;
-(id)findSettingsAnnounceRelationWithModelID:(id)arg0 ;
-(id)materializeOrCreateBulletinConditionsRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(id)materializeOrCreateSettingsAnnounceRelationWithModelID:(id)arg0 createdNew:(*BOOL)arg1 ;
-(void)addBulletinConditionsObject:(id)arg0 ;
-(void)addPairedHAPAccessoriesObject:(id)arg0 ;
-(void)removeBulletinConditionsObject:(id)arg0 ;
-(void)removePairedHAPAccessoriesObject:(id)arg0 ;


@end


#endif