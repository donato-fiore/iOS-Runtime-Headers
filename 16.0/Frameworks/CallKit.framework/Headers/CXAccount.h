// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXACCOUNT_H
#define CXACCOUNT_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CXHandle.h"

@interface CXAccount : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *accountDescription; // ivar: _accountDescription
@property (readonly, nonatomic) CXHandle *handle; // ivar: _handle
@property (readonly, copy, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly, copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, copy, nonatomic) NSString *shortLabel; // ivar: _shortLabel


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
-(id)initWithUUID:(id)arg0 description:(id)arg1 serviceName:(id)arg2 isoCountryCode:(id)arg3 handle:(id)arg4 ;
-(id)initWithUUID:(id)arg0 description:(id)arg1 serviceName:(id)arg2 isoCountryCode:(id)arg3 handle:(id)arg4 shortLabel:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif