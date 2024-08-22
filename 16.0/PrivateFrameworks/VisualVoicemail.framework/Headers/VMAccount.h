// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMACCOUNT_H
#define VMACCOUNT_H

@class NSUUID, NSString;
@protocol NSCopying, NSMutableCopying, VMSecureCoding;

#import <Foundation/Foundation.h>

#import "VMHandle.h"

@interface VMAccount : NSObject <NSCopying, NSMutableCopying, VMSecureCoding>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSString *abbreviatedAccountDescription; // ivar: _abbreviatedAccountDescription
@property (copy, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (retain, nonatomic) VMHandle *handle; // ivar: _handle
@property (copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (nonatomic, getter=isProvisioned) BOOL provisioned; // ivar: _provisioned
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccount:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)copyPropertiesWithZone:(struct _NSZone *)arg0 toAccount:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif