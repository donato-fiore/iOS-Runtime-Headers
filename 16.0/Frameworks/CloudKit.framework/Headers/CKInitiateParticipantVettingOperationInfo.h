// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKINITIATEPARTICIPANTVETTINGOPERATIONINFO_H
#define CKINITIATEPARTICIPANTVETTINGOPERATIONINFO_H

@class NSString;
@protocol NSSecureCoding;


#import "CKOperationInfo.h"
#import "CKShareMetadata.h"

@interface CKInitiateParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (copy, nonatomic) NSString *participantID; // ivar: _participantID
@property (retain, nonatomic) CKShareMetadata *shareMetadata; // ivar: _shareMetadata


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif