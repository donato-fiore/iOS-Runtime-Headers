// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICUSERSPECIFICRECORDID_H
#define ICUSERSPECIFICRECORDID_H

@class CKRecordID, NSString;

#import <Foundation/Foundation.h>


@interface ICUserSpecificRecordID : NSObject

@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *recordType; // ivar: _recordType
@property (retain, nonatomic) NSString *shareOwnerName; // ivar: _shareOwnerName
@property (readonly, nonatomic) CKRecordID *sharedRecordID;
@property (retain, nonatomic) NSString *sharedRecordName; // ivar: _sharedRecordName
@property (readonly, nonatomic) NSString *sharedRecordType;
@property (retain, nonatomic) NSString *userSpecificOwnerName; // ivar: _userSpecificOwnerName
@property (retain, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)isUserSpecificRecordID:(id)arg0 ;
+(BOOL)isUserSpecificRecordType:(id)arg0 ;
+(id)userSpecificRecordTypeFromSharedRecordType:(id)arg0 ;
-(id)initWithRecordName:(id)arg0 ;
-(id)initWithRecordType:(id)arg0 shareOwnerName:(id)arg1 databaseScope:(NSInteger)arg2 zoneName:(id)arg3 userSpecificOwnerName:(id)arg4 sharedRecordName:(id)arg5 ;


@end


#endif