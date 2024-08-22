// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKCLOUDRECORDARRAYDATABASE_H
#define PKCLOUDRECORDARRAYDATABASE_H

@class NSString, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding>

 {
    NSString *_identifier;
}


@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone; // ivar: _cloudRecordByDatabaseZone


+(BOOL)supportsSecureCoding;
-(NSInteger)count;
-(id)allItems;
-(id)allObjects;
-(id)allRecordIDs;
-(id)allRecordNames;
-(id)allRecordsWithRecordType:(id)arg0 ;
-(id)countByZoneID;
-(id)description;
-(id)descriptionWithDetailedOutput:(BOOL)arg0 includeItem:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)addCloudRecord:(id)arg0 ;
-(void)applyCloudRecordDatabase:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif