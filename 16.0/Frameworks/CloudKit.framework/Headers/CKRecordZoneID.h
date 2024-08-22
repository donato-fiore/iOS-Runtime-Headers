// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKRECORDZONEID_H
#define CKRECORDZONEID_H

@class NSString;
@protocol CKXPCSuitableString, CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CKRecordZoneID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *anonymousCKUserID; // ivar: _anonymousCKUserID
@property (readonly, nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *ownerName; // ivar: _ownerName
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
+(id)cachedRecordZoneIDWithName:(id)arg0 ownerName:(id)arg1 anonymousCKUserID:(id)arg2 databaseScope:(NSInteger)arg3 ;
-(BOOL)isDefaultRecordZoneID;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSystemRecordZoneID;
-(NSInteger)compareToRecordZoneID:(id)arg0 ;
-(id)CKShortDescriptionRedact:(BOOL)arg0 ;
-(id)CKXPCSuitableString;
-(id)_initWithZoneName:(id)arg0 ownerName:(id)arg1 anonymousCKUserID:(id)arg2 databaseScope:(NSInteger)arg3 ;
-(id)ckShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)initWithZoneName:(id)arg0 ownerName:(id)arg1 ;
-(id)initWithZoneName:(id)arg0 ownerName:(id)arg1 anonymousCKUserID:(id)arg2 ;
-(id)initWithZoneName:(id)arg0 ownerName:(id)arg1 anonymousCKUserID:(id)arg2 databaseScope:(NSInteger)arg3 ;
-(id)initWithZoneName:(id)arg0 ownerName:(id)arg1 databaseScope:(NSInteger)arg2 ;
-(id)redactedDescription;
-(id)sqliteRepresentation;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)ck_bindInStatement:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif