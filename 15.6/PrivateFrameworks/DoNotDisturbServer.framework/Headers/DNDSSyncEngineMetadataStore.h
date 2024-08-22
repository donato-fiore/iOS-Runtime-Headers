// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSSYNCENGINEMETADATASTORE_H
#define DNDSSYNCENGINEMETADATASTORE_H

@class NSData, NSMutableDictionary, NSURL, NSString, NSMutableSet;
@protocol DNDSSyncEngineMetadataStoring;

#import <Foundation/Foundation.h>


@interface DNDSSyncEngineMetadataStore : NSObject <DNDSSyncEngineMetadataStoring>

 {
    NSData *_metadata;
    NSMutableDictionary *_systemFieldsByRecordID;
    NSURL *_url;
    NSString *_userRecordID;
    NSInteger _accountStatus;
    BOOL _encryptionAvailable;
    NSMutableSet *_zoneNames;
}


@property (nonatomic) NSInteger accountStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEncryptionAvailable) BOOL encryptionAvailable;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *metadata;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userRecordID;


-(BOOL)addZoneName:(id)arg0 ;
-(BOOL)removeZoneName:(id)arg0 ;
-(id)_decodeRecordIDFromData:(id)arg0 ;
-(id)_encodedRecordIDFromRecordID:(id)arg0 ;
-(id)_encodedSystemFieldsFromRecord:(id)arg0 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)recordIDsWithZoneID:(id)arg0 ;
-(id)recordWithID:(id)arg0 ;
-(id)zoneNames;
-(void)_read;
-(void)_removeSystemFieldsForRecordID:(id)arg0 ;
-(void)_updateSystemFieldsForRecord:(id)arg0 ;
-(void)_write;
-(void)addRecord:(id)arg0 ;
-(void)purge;
-(void)removeRecordWithID:(id)arg0 ;
-(void)removeRecordsWithZoneID:(id)arg0 ;


@end


#endif