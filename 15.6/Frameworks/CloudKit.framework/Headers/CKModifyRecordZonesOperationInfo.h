// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMODIFYRECORDZONESOPERATIONINFO_H
#define CKMODIFYRECORDZONESOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (nonatomic) BOOL allowDefaultZoneSave; // ivar: _allowDefaultZoneSave
@property (nonatomic) BOOL dontFetchFromServer; // ivar: _dontFetchFromServer
@property (nonatomic) BOOL markZonesAsUserPurged; // ivar: _markZonesAsUserPurged
@property (nonatomic) NSInteger maxZoneSaveAttempts; // ivar: _maxZoneSaveAttempts
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (retain, nonatomic) NSArray *recordZonesToSave; // ivar: _recordZonesToSave


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif