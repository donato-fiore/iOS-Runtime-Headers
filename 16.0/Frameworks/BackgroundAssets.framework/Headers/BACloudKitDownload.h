// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BACLOUDKITDOWNLOAD_H
#define BACLOUDKITDOWNLOAD_H

@class NSString, CKContainerID, CKQuery, CKRecordZoneID;
@protocol NSSecureCoding;


#import "BADownload.h"

@interface BACloudKitDownload : BADownload <NSSecureCoding>



@property (retain, nonatomic) NSString *assetKey; // ivar: _assetKey
@property (retain, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) CKQuery *query; // ivar: _query
@property (retain, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 recordType:(id)arg1 expectedFieldKey:(id)arg2 expectedFieldValue:(id)arg3 assetKey:(id)arg4 applicationGroupIdentifier:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 recordType:(id)arg1 expectedFieldKey:(id)arg2 expectedFieldValue:(id)arg3 assetKey:(id)arg4 applicationGroupIdentifier:(id)arg5 containerIdentifier:(id)arg6 zoneID:(id)arg7 databaseScope:(NSInteger)arg8 priority:(NSInteger)arg9 ;
-(id)initWithIdentifier:(id)arg0 recordType:(id)arg1 recordName:(id)arg2 assetKey:(id)arg3 applicationGroupIdentifier:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif