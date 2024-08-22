// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSGRADIENTSTOP_H
#define TPSGRADIENTSTOP_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"

@interface TPSGradientStop : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *colorString; // ivar: _colorString
@property (copy, nonatomic) NSNumber *location; // ivar: _location


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorString:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif