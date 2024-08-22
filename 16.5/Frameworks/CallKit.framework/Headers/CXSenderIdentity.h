// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CXSENDERIDENTITY_H
#define CXSENDERIDENTITY_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CXAccount.h"
#import "CXHandle.h"

@interface CXSenderIdentity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) CXAccount *account; // ivar: _account
@property (readonly, nonatomic) CXHandle *handle;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedShortName; // ivar: _localizedShortName


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSenderIdentity:(id)arg0 ;
-(NSUInteger)hash;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 account:(id)arg1 ;
-(id)initWithUUID:(id)arg0 handle:(id)arg1 localizedName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif