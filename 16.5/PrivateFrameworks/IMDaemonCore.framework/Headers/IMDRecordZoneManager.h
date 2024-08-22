// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDRECORDZONEMANAGER_H
#define IMDRECORDZONEMANAGER_H

@class CKRecordZone, CKRecordZoneID, NSString, APSConnection;
@protocol APSConnectionDelegate;

#import <Foundation/Foundation.h>

#import "IMDCKDatabaseManager.h"

@interface IMDRecordZoneManager : NSObject <APSConnectionDelegate>



@property (readonly, nonatomic) CKRecordZone *analyticRecordZone; // ivar: _analyticRecordZone
@property (readonly, nonatomic) CKRecordZoneID *analyticRecordZoneID; // ivar: _analyticRecordZoneID
@property (readonly, nonatomic) CKRecordZone *attachmentRecordZone; // ivar: _attachmentRecordZone
@property (readonly, nonatomic) CKRecordZoneID *attachmentRecordZoneID; // ivar: _attachmentRecordZoneID
@property (readonly, nonatomic) CKRecordZone *chatRecordZone; // ivar: _chatRecordZone
@property (readonly, nonatomic) CKRecordZoneID *chatRecordZoneID; // ivar: _chatRecordZoneID
@property (retain, nonatomic) IMDCKDatabaseManager *dataBaseManager; // ivar: _dataBaseManager
@property (readonly, nonatomic) CKRecordZone *deDupeSaltRecordZone; // ivar: _deDupeSaltRecordZone
@property (readonly, nonatomic) CKRecordZoneID *deDupeSaltZoneID; // ivar: _deDupeSaltZoneID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordZone *messageRecordZone; // ivar: _messageRecordZone
@property (readonly, nonatomic) CKRecordZoneID *messageRecordZoneID; // ivar: _messageRecordZoneID
@property (readonly, nonatomic) CKRecordZoneID *metricZoneID; // ivar: _metricZoneID
@property (retain, nonatomic) APSConnection *pushConnection; // ivar: _pushConnection
@property (readonly, nonatomic) CKRecordZone *recoverableMessageRecordZone; // ivar: _recoverableMessageRecordZone
@property (readonly, nonatomic) CKRecordZoneID *recoverableMessageRecordZoneID; // ivar: _recoverableMessageRecordZoneID
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKRecordZone *updateRecordZone; // ivar: _updateRecordZone
@property (readonly, nonatomic) CKRecordZoneID *updateRecordZoneID; // ivar: _updateRecordZoneID


+(id)sharedInstance;
-(NSInteger)derivedQualityOfService;
-(id)ckUtilities;
-(id)errorAnalyzer;
-(id)init;
-(void)_checkRecordZoneExists:(id)arg0 completionBlock:(id)arg1 ;
-(void)_createRecordZone:(id)arg0 completionBlock:(id)arg1 ;
-(void)_createRecordZoneIfNeeded:(id)arg0 completionBlock:(id)arg1 ;
-(void)_createSubscriptionForZoneID:(id)arg0 subscriptionID:(id)arg1 recordType:(id)arg2 completionBlock:(id)arg3 ;
-(void)_createSubscriptionIfNeededForZoneID:(id)arg0 subscriptionID:(id)arg1 recordType:(id)arg2 completionBlock:(id)arg3 ;
-(void)_deleteAllZonesForDatabase:(id)arg0 ;
-(void)_deleteZone:(id)arg0 ;
-(void)_deleteZone:(id)arg0 forDatabase:(id)arg1 ;
-(void)_handleNotificationForZoneID:(id)arg0 subscriptionID:(id)arg1 ;
-(void)_setUpPushConnection;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)createAnalyticZoneIfNeededWithCompletionBlock:(id)arg0 ;
-(void)createAttachmentZoneIfNeededWithCompletionBlock:(id)arg0 ;
-(void)createChatZoneIfNeededWithCompletionBlock:(id)arg0 ;
-(void)createDeDupeSaltZoneIfNeededWithCompletionBlock:(id)arg0 ;
-(void)createMessageZoneIfNeededWithCompletionBlock:(id)arg0 ;
-(void)createRecoverableMessageZoneIfNeededWithCompletionBlock:(id)arg0 ;
-(void)createSubscriptionIfNeededOnDeDupeZoneForSubscription:(id)arg0 recordType:(id)arg1 completionBlock:(id)arg2 ;
-(void)createUpdateZoneIfNeededWithCompletionBlock:(id)arg0 ;
-(void)dealloc;
-(void)deleteAllZones;
-(void)deleteAnalyticZone;
-(void)deleteAttachmentZone;
-(void)deleteChatZone;
-(void)deleteDeDupeSaltZone;
-(void)deleteMessageZone;
-(void)deleteRecoverableMessageZone;
-(void)deleteUpdateZone;
-(void)fetchChatZoneToCheckManateeStatus:(id)arg0 ;


@end


#endif