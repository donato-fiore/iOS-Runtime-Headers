// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPERSISTENTSOURCE_H
#define EKPERSISTENTSOURCE_H

@class NSString, NSNumber;


#import "EKPersistentObject.h"
#import "EKFrozenReminderSource.h"

@interface EKPersistentSource : EKPersistentObject

@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (retain) EKFrozenReminderSource *reminderSource; // ivar: _reminderSource
@property (nonatomic) NSInteger sourceType;
@property (nonatomic) int strictestEventPrivateValue;
@property (copy, nonatomic) NSString *title;


+(Class)meltedClass;
+(id)defaultPropertiesToLoad;
+(id)propertyKeyForUniqueIdentifier;
+(id)relations;
-(BOOL)showsNotifications;
-(id)cachedExternalInfoData;
-(id)constraints;
-(id)constraintsName;
-(id)creatorBundleID;
-(id)creatorCodeSigningIdentity;
-(id)defaultAllDayAlarmOffset;
-(id)delegatedAccountOwnerStoreID;
-(id)description;
-(id)lastSyncEndDate;
-(id)lastSyncStartDate;
-(id)notes;
-(id)ownerName;
-(id)syncError;
-(int)displayOrder;
-(int)entityType;
-(int)flags;
-(int)flags2;
-(int)managedConfigurationAccountAccess;
-(void)setCachedExternalInfoData:(id)arg0 ;
-(void)setConstraintsName:(id)arg0 ;
-(void)setCreatorBundleID:(id)arg0 ;
-(void)setCreatorCodeSigningIdentity:(id)arg0 ;
-(void)setDefaultAllDayAlarmOffset:(id)arg0 ;
-(void)setDelegatedAccountOwnerStoreID:(id)arg0 ;
-(void)setDisplayOrder:(int)arg0 ;
-(void)setFlags2:(int)arg0 ;
-(void)setFlags:(int)arg0 ;
-(void)setLastSyncEndDate:(id)arg0 ;
-(void)setLastSyncStartDate:(id)arg0 ;
-(void)setNotes:(id)arg0 ;
-(void)setOwnerName:(id)arg0 ;
-(void)setShowsNotifications:(BOOL)arg0 ;
-(void)setSyncError:(id)arg0 ;


@end


#endif