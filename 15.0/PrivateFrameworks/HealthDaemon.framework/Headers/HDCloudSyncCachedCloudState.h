// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCLOUDSYNCCACHEDCLOUDSTATE_H
#define HDCLOUDSYNCCACHEDCLOUDSTATE_H

@class HDAssertion;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDCloudSyncRepository.h"

@interface HDCloudSyncCachedCloudState : NSObject {
    HDAssertion *_accessibilityAssertion;
}


@property (nonatomic) NSInteger changedRecordsCount; // ivar: _changedRecordsCount
@property (nonatomic) NSInteger changedZonesCount; // ivar: _changedZonesCount
@property (nonatomic) NSInteger deletedRecordsCount; // ivar: _deletedRecordsCount
@property (nonatomic) NSInteger deletedZonesCount; // ivar: _deletedZonesCount
@property (nonatomic) NSInteger operationCountForAnalytics; // ivar: _operationCountForAnalytics
@property (readonly, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) HDCloudSyncRepository *repository; // ivar: _repository


-(BOOL)addDatabaseWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)addZoneWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteDatabaseWithContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)resetServerChangeTokenForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setServerChangeToken:(id)arg0 containerIdentifier:(id)arg1 databaseScope:(NSInteger)arg2 error:(*id)arg3 ;
-(id)detailedDescription;
-(id)init;
-(id)initWithRepository:(id)arg0 accessibilityAssertion:(id)arg1 ;
-(id)masterZoneForContainerID:(id)arg0 error:(*id)arg1 ;
-(id)privateMetadataZoneForContainerID:(id)arg0 error:(*id)arg1 ;
-(id)serverChangeTokenForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 error:(*id)arg2 ;
-(id)unifiedSyncZoneForContainerID:(id)arg0 error:(*id)arg1 ;
-(id)zoneForRecordID:(id)arg0 containerIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)zoneIdentifiersForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 error:(*id)arg2 ;
-(id)zoneIdentifiersRequiringFetchForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 error:(*id)arg2 ;
-(id)zoneIdentifiersWithIdentityLossForContainerIdentifier:(id)arg0 databaseScope:(NSInteger)arg1 error:(*id)arg2 ;
-(id)zonesByIdentifierWithError:(*id)arg0 ;
-(id)zonesByIdentifierWithError:(*id)arg0 filter:(id)arg1 ;
-(id)zonesForContainerID:(id)arg0 error:(*id)arg1 ;


@end


#endif