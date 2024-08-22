// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFPROVISIONINGPROFILE_H
#define DMFPROVISIONINGPROFILE_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFProvisioningProfile : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 name:(id)arg1 expirationDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif