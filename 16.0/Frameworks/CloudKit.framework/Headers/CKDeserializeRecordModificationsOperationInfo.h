// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDESERIALIZERECORDMODIFICATIONSOPERATIONINFO_H
#define CKDESERIALIZERECORDMODIFICATIONSOPERATIONINFO_H

@class NSData;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKDeserializeRecordModificationsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSData *serializedModifications; // ivar: _serializedModifications


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif