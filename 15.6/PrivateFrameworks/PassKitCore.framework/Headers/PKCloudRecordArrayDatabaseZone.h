// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCLOUDRECORDARRAYDATABASEZONE_H
#define PKCLOUDRECORDARRAYDATABASEZONE_H

@class CKRecordZoneID, NSString, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding>

 {
    CKRecordZoneID *_zoneID;
    NSString *_databaseIdentifier;
}


@property (retain, nonatomic) NSMutableDictionary *cloudRecordByZoneRecord; // ivar: _cloudRecordByZoneRecord


+(BOOL)supportsSecureCoding;
-(NSInteger)count;
-(id)allItems;
-(id)allObjects;
-(id)allRecordIDs;
-(id)allRecordNames;
-(id)allRecordsWithRecordType:(id)arg0 ;
-(id)description;
-(id)descriptionWithDetailedOutput:(BOOL)arg0 includeItem:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneID:(id)arg0 databaseIdentifier:(id)arg1 ;
-(void)addCloudRecord:(id)arg0 ;
-(void)applyCloudRecordDatabaseZone:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif