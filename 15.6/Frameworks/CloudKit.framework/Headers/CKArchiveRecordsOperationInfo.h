// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKARCHIVERECORDSOPERATIONINFO_H
#define CKARCHIVERECORDSOPERATIONINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKArchiveRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif