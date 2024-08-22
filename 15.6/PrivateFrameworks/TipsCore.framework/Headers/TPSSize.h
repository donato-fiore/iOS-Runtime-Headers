// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSSIZE_H
#define TPSSIZE_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"

@interface TPSSize : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSNumber *height; // ivar: _height
@property (copy, nonatomic) NSNumber *width; // ivar: _width


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif