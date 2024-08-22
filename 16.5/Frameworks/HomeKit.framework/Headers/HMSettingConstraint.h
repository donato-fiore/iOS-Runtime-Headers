// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSETTINGCONSTRAINT_H
#define HMSETTINGCONSTRAINT_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying, NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSettingConstraint : NSObject <NSSecureCoding, NSCopying>



@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSInteger type; // ivar: _type
@property (readonly, copy) NSObject<NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)supportedValueClasses;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 value:(id)arg1 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif