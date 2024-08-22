// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNENTITYIDENTIFIER_H
#define LNENTITYIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNEntityIdentifier : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *instanceIdentifier; // ivar: _instanceIdentifier
@property (readonly, nonatomic) NSInteger scope;
@property (readonly, copy, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSString *value;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypeIdentifier:(id)arg0 instanceIdentifier:(id)arg1 ;
-(id)initWithValue:(id)arg0 scope:(NSInteger)arg1 typeName:(id)arg2 ;
-(id)initWithValue:(id)arg0 typeName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif