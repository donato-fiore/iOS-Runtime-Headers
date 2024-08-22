// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSGRADIENT_H
#define TPSGRADIENT_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"

@interface TPSGradient : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *stops; // ivar: _stops


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorStrings:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif