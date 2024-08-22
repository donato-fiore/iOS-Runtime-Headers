// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYSETTINGCONSTRAINT_H
#define HMACCESSORYSETTINGCONSTRAINT_H

@class NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HMAccessorySettingConstraint : NSObject <NSSecureCoding, NSCopying>

 {
    unsigned char _identifierUUIDBytes;
}


@property (readonly) NSUUID *identifier;
@property (readonly) NSInteger type; // ivar: _type
@property (readonly, copy) id *value; // ivar: _value


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
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 value:(id)arg2 ;
-(id)initWithType:(NSInteger)arg0 value:(id)arg1 ;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif