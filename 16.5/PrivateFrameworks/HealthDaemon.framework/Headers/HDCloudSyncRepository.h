// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCREPOSITORY_H
#define HDCLOUDSYNCREPOSITORY_H

@class NSSet, CKContainer, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDCloudSyncBehavior.h"

@interface HDCloudSyncRepository : NSObject

@property (readonly, nonatomic) NSSet *allCKContainers; // ivar: _allCKContainers
@property (readonly, nonatomic) int deviceMode;
@property (readonly, nonatomic) CKContainer *primaryCKContainer; // ivar: _primaryCKContainer
@property (readonly, nonatomic) HDProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger repositorySettings; // ivar: _repositorySettings
@property (readonly, nonatomic) NSArray *secondaryCKContainers; // ivar: _secondaryCKContainers
@property (readonly, nonatomic) BOOL shouldPushToUnifiedZone; // ivar: _shouldPushToUnifiedZone
@property (readonly, nonatomic) HDCloudSyncBehavior *syncBehavior; // ivar: _syncBehavior
@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier; // ivar: _syncCircleIdentifier
@property (readonly, copy, nonatomic) NSString *userRecordName; // ivar: _userRecordName


-(id)cachedOwnerIdentifierForContainer:(id)arg0 ;
-(id)containerForContainerIdentifier:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithProfile:(id)arg0 syncCircleIdentifier:(id)arg1 primaryCKContainer:(id)arg2 secondaryCKContainers:(id)arg3 userRecordName:(id)arg4 ;
-(void)cacheAllOwnerIdentifiersWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)fetchOwnerIdentifierForContainer:(id)arg0 completion:(id)arg1 ;


@end


#endif