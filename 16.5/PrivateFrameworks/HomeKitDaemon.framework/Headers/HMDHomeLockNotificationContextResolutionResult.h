// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMELOCKNOTIFICATIONCONTEXTRESOLUTIONRESULT_H
#define HMDHOMELOCKNOTIFICATIONCONTEXTRESOLUTIONRESULT_H

@class HMFObject, NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;



@interface HMDHomeLockNotificationContextResolutionResult : HMFObject <NSSecureCoding, NSCopying>



@property (readonly, copy) NSString *label; // ivar: _label
@property (readonly, copy) NSUUID *userUUID; // ivar: _userUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserUUID:(id)arg0 label:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif