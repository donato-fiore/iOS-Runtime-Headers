// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTIDCLOUDKITLOCALDB_H
#define MTIDCLOUDKITLOCALDB_H

@class NSURL, NSString, CKRecordZoneID;
@protocol MTIDCloudKitLocalDBDelegate;

#import <Foundation/Foundation.h>


@interface MTIDCloudKitLocalDB : NSObject

@property (weak, nonatomic) NSObject<MTIDCloudKitLocalDBDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSURL *pathURL; // ivar: _pathURL
@property (retain, nonatomic) NSString *recordType; // ivar: _recordType
@property (retain, nonatomic) CKRecordZoneID *recordZoneID; // ivar: _recordZoneID
@property (nonatomic) BOOL zoneCreated; // ivar: _zoneCreated


-(BOOL)deleteIfExists:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRecordWithID:(id)arg0 error:(*id)arg1 ;
-(BOOL)fileExists:(id)arg0 ;
-(BOOL)needsFetchRecords;
-(BOOL)setUserRecordIDName:(id)arg0 ;
-(BOOL)writeData:(id)arg0 forName:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeRecord:(id)arg0 error:(*id)arg1 ;
-(id)allRecords;
-(id)dataForName:(id)arg0 error:(*id)arg1 ;
-(id)decodeRecordFromData:(id)arg0 recordID:(id)arg1 isSynchronized:(BOOL)arg2 ;
-(id)encodeRecord:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 recordType:(id)arg1 recordZoneID:(id)arg2 ;
-(id)pendingRecordIDs;
-(id)recordWithID:(id)arg0 error:(*id)arg1 ;
-(id)syncStatusCode;
-(id)userRecordIDName;
-(void)clearData;
-(void)setNeedsFetchRecords:(BOOL)arg0 ;
-(void)setSyncStatusCode:(id)arg0 ;


@end


#endif