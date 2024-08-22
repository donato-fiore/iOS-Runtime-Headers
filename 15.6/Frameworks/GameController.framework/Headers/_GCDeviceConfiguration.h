// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCDEVICECONFIGURATION_H
#define _GCDEVICECONFIGURATION_H

@class NSDictionary, NSSet;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCDeviceConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *deviceBuilderIdentifier;
@property (readonly, copy) NSSet *deviceDependencies;
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *deviceIdentifier;
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier; // ivar: _identifier
@property (readonly) NSUInteger priority;
@property (readonly, getter=isTransient) BOOL transient;


+(BOOL)supportsSecureCoding;
+(id)configurationWithIdentifier:(id)arg0 priority:(NSUInteger)arg1 deviceIdentifier:(id)arg2 deviceDependencies:(id)arg3 deviceBuilder:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifier:(id)arg0 attributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)redactedDescription;
-(id)valueForAttribute:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif