// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIAPPREFERENCE_H
#define MIAPPREFERENCE_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MIAppIdentity.h"

@interface MIAppReference : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger domain; // ivar: _domain
@property (readonly, nonatomic) MIAppIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) NSUUID *referenceUUID; // ivar: _referenceUUID
@property (readonly, nonatomic) unsigned int uid; // ivar: _uid


+(BOOL)supportsSecureCoding;
+(BOOL)validateAppReference:(id)arg0 withError:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReferenceUUID:(id)arg0 identity:(id)arg1 domain:(NSUInteger)arg2 uid:(unsigned int)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif