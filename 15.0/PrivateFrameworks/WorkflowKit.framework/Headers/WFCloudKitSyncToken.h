// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCLOUDKITSYNCTOKEN_H
#define WFCLOUDKITSYNCTOKEN_H

@class NSString, NSDate, NSOrderedSet, NSData, CKServerChangeToken;


#import "WFRecord.h"

@interface WFCloudKitSyncToken : WFRecord

@property (copy, nonatomic) NSString *account; // ivar: _account
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSOrderedSet *lastOrdering;
@property (copy, nonatomic) NSData *lastOrderingCloudKitRecordMetadata; // ivar: _lastOrderingCloudKitRecordMetadata
@property (copy, nonatomic) NSData *lastOrderingData; // ivar: _lastOrderingData
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (copy, nonatomic) NSData *serverChangeTokenData; // ivar: _serverChangeTokenData
@property (copy, nonatomic) NSData *syncEngineMetadata; // ivar: _syncEngineMetadata
@property (copy, nonatomic) NSData *syncFlagsCloudKitRecordMetadata; // ivar: _syncFlagsCloudKitRecordMetadata


+(id)accountForContainerEnvironmentString:(id)arg0 userRecordID:(id)arg1 ;
+(id)defaultPropertyValues;
+(id)ignoredPropertyNames;
-(id)newTokenWithCopiedPayload;


@end


#endif