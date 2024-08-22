// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKNOTIFICATIONID_H
#define CKNOTIFICATIONID_H

@class NSString;
@protocol CKXPCSuitableString, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKNotificationID : NSObject <CKXPCSuitableString, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *notificationUUID; // ivar: _notificationUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)CKXPCSuitableString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationUUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif