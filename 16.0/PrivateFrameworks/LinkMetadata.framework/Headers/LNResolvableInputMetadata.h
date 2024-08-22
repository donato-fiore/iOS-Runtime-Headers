// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNRESOLVABLEINPUTMETADATA_H
#define LNRESOLVABLEINPUTMETADATA_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "LNValueType.h"

@interface LNResolvableInputMetadata : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSString *queryType; // ivar: _queryType
@property (readonly, copy, nonatomic) LNValueType *valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQueryType:(id)arg0 ;
-(id)initWithValueType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif