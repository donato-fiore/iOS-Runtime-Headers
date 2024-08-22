// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKFETCHSHAREPARTICIPANTKEYOPERATIONINFO_H
#define CKFETCHSHAREPARTICIPANTKEYOPERATIONINFO_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "CKDatabaseOperationInfo.h"

@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *baseTokensByShareID; // ivar: _baseTokensByShareID
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID; // ivar: _childRecordIDsByShareID
@property (retain, nonatomic) NSArray *shareIDs; // ivar: _shareIDs


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif