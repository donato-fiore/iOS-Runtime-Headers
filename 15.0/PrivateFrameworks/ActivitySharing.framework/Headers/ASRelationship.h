// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASRELATIONSHIP_H
#define ASRELATIONSHIP_H

@class NSUUID, NSSet, NSString, NSDate, NSArray, CKRecordID, CKRecord;
@protocol ASCloudKitCodable, NSCopying;

#import <Foundation/Foundation.h>

#import "ASCodableCloudKitRelationship.h"

@interface ASRelationship : NSObject <ASCloudKitCodable, NSCopying>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) NSSet *addresses; // ivar: _addresses
@property (retain, nonatomic) NSString *cloudKitAddress; // ivar: _cloudKitAddress
@property (readonly, nonatomic) ASCodableCloudKitRelationship *codableRelationship;
@property (readonly, nonatomic) NSUInteger currentRelationshipEventAnchor;
@property (retain, nonatomic) NSDate *dateActivityDataInitiallyBecameVisible; // ivar: _dateActivityDataInitiallyBecameVisible
@property (retain, nonatomic) NSDate *dateForLatestDataHidden; // ivar: _dateForLatestDataHidden
@property (retain, nonatomic) NSDate *dateForLatestIgnoredCompetitionRequest; // ivar: _dateForLatestIgnoredCompetitionRequest
@property (retain, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest; // ivar: _dateForLatestIncomingCompetitionRequest
@property (retain, nonatomic) NSDate *dateForLatestIncomingInviteRequest; // ivar: _dateForLatestIncomingInviteRequest
@property (retain, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest; // ivar: _dateForLatestOutgoingCompetitionRequest
@property (retain, nonatomic) NSDate *dateForLatestOutgoingInviteRequest; // ivar: _dateForLatestOutgoingInviteRequest
@property (retain, nonatomic) NSDate *dateForLatestRelationshipStart; // ivar: _dateForLatestRelationshipStart
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCompletedCompetition; // ivar: _hasCompletedCompetition
@property (nonatomic) BOOL hasIgnoredCompetitionRequest; // ivar: _hasIgnoredCompetitionRequest
@property (nonatomic) BOOL hasIncomingCompetitionRequest; // ivar: _hasIncomingCompetitionRequest
@property (nonatomic) BOOL hasIncomingInviteRequest; // ivar: _hasIncomingInviteRequest
@property (nonatomic) BOOL hasOutgoingCompetitionRequest; // ivar: _hasOutgoingCompetitionRequest
@property (nonatomic) BOOL hasOutgoingInviteRequest; // ivar: _hasOutgoingInviteRequest
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *incomingHandshakeToken; // ivar: _incomingHandshakeToken
@property (readonly, nonatomic) BOOL isActivityDataVisible;
@property (nonatomic) BOOL isAwaitingCompetitionResponse; // ivar: _isAwaitingCompetitionResponse
@property (nonatomic) BOOL isAwaitingInviteResponse; // ivar: _isAwaitingInviteResponse
@property (nonatomic) BOOL isCompetitionActive; // ivar: _isCompetitionActive
@property (nonatomic) BOOL isFriendshipActive; // ivar: _isFriendshipActive
@property (readonly, nonatomic) BOOL isHidingActivityData; // ivar: _isHidingActivityData
@property (nonatomic) BOOL isMuteEnabled; // ivar: _isMuteEnabled
@property (retain, nonatomic) NSString *outgoingHandshakeToken; // ivar: _outgoingHandshakeToken
@property (retain, nonatomic) NSString *preferredReachableAddress; // ivar: _preferredReachableAddress
@property (retain, nonatomic) NSString *preferredReachableService; // ivar: _preferredReachableService
@property (copy, nonatomic) NSArray *relationshipEvents; // ivar: _relationshipEvents
@property (retain, nonatomic) CKRecordID *relationshipShareID; // ivar: _relationshipShareID
@property (retain, nonatomic) CKRecordID *remoteActivityDataShareID; // ivar: _remoteActivityDataShareID
@property (retain, nonatomic) CKRecordID *remoteRelationshipShareID; // ivar: _remoteRelationshipShareID
@property (nonatomic) BOOL sentInviteResponse; // ivar: _sentInviteResponse
@property (readonly) Class superclass;
@property (nonatomic) unsigned int supportedPhoneFeatures; // ivar: _supportedPhoneFeatures
@property (nonatomic) unsigned int supportedWatchFeatures; // ivar: _supportedWatchFeatures
@property (retain, nonatomic) CKRecord *systemFieldsOnlyRecord; // ivar: _systemFieldsOnlyRecord
@property (readonly, nonatomic) NSDate *timestampForMostRecentRelationshipEvent;
@property (nonatomic) NSInteger version; // ivar: _version


+(id)relationshipWithCodableRelationship:(id)arg0 version:(NSInteger)arg1 ;
+(id)relationshipWithCodableRelationshipContainer:(id)arg0 ;
+(id)relationshipsWithRelationshipAndEventRecords:(id)arg0 ;
+(void)_relationshipWithRecord:(id)arg0 relationshipEventRecords:(id)arg1 completion:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRelationship:(id)arg0 ;
-(BOOL)supportsCompetitions;
-(NSUInteger)_nextAnchor;
-(id)codableRelationshipContainerIncludingCloudKitFields:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)recordWithZoneID:(id)arg0 ;
-(id)relationshipSnapshotForDate:(id)arg0 ;
-(void)_clearRelationshipState;
-(void)_updateCurrentRelationshipState;
-(void)_updateDateActivityDataBecameVisibleWithDate:(id)arg0 ;
-(void)_updateDateFriendshipBeganWithDate:(id)arg0 ;
-(void)insertEventWithType:(unsigned short)arg0 ;
-(void)insertEventWithType:(unsigned short)arg0 timestamp:(id)arg1 ;
-(void)insertEvents:(id)arg0 ;
-(void)traverseRelationshipHistoryStartingAtEventWithAnchor:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif