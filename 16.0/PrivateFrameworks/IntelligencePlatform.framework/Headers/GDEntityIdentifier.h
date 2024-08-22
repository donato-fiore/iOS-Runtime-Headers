// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDENTITYIDENTIFIER_H
#define GDENTITYIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GDEntityIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger entityClass;
@property (readonly, nonatomic) NSUInteger intValue; // ivar: _intValue
@property (readonly, nonatomic) NSString *stringValue; // ivar: _stringValue


+(BOOL)supportsSecureCoding;
+(id)prefixedIdentifierStringForIdentifierString:(id)arg0 ;
+(id)prefixedIdentifierStringForIdentifierValue:(NSUInteger)arg0 ;
+(id)unprefixedIdentifierStringForIdentifierString:(id)arg0 ;
+(id)unprefixedIdentifierStringForIdentifierValue:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithValue:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif