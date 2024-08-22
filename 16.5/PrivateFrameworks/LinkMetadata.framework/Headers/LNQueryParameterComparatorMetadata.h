// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNQUERYPARAMETERCOMPARATORMETADATA_H
#define LNQUERYPARAMETERCOMPARATORMETADATA_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNValueType.h"

@interface LNQueryParameterComparatorMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger comparatorType; // ivar: _comparatorType
@property (readonly, copy, nonatomic) NSArray *resolvableInputTypes; // ivar: _resolvableInputTypes
@property (readonly, copy, nonatomic) LNValueType *valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComparatorType:(NSUInteger)arg0 valueType:(id)arg1 resolvableInputTypes:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif