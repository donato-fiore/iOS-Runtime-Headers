// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMBSHAREUSERID_H
#define HMBSHAREUSERID_H

@class HMFObject, CKRecordID;
@protocol NSSecureCoding;



@interface HMBShareUserID : HMFObject <NSSecureCoding>



@property (readonly) CKRecordID *userRecordID; // ivar: _userRecordID


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserRecordID:(id)arg0 ;
-(id)logIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif