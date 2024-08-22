// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKBLOODTYPEOBJECT_H
#define HKBLOODTYPEOBJECT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKBloodTypeObject : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSInteger bloodType; // ivar: _bloodType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithBloodType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif