// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKRECORDID_H
#define CKRECORDID_H

@class NSString;
@protocol CKXPCSuitableString, CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKRecordZoneID.h"

@interface CKRecordID : NSObject <CKXPCSuitableString, CKPropertiesDescription, CKSQLiteItem, NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *recordName; // ivar: _recordName
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID; // ivar: _zoneID


+(BOOL)isValidRecordName:(id)arg0 outError:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringAnonymousUserIDsToRecordID:(id)arg0 ;
-(NSInteger)compareToRecordID:(id)arg0 ;
-(id)CKShortDescriptionRedact:(BOOL)arg0 ;
-(id)CKXPCSuitableString;
-(id)ckShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordName:(id)arg0 ;
-(id)initWithRecordName:(id)arg0 zoneID:(id)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)redactedDescription;
-(id)sqliteRepresentation;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)_nilOutRecordName;
-(void)ck_bindInStatement:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif