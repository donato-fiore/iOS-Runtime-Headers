// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCMUTABLEDEVICECONFIGURATION_H
#define _GCMUTABLEDEVICECONFIGURATION_H

@class GCDeviceConfiguration, NSSet;
@protocol NSObject><NSCopying><NSSecureCoding;



@interface _GCMutableDeviceConfiguration : GCDeviceConfiguration

@property (copy) NSObject<NSObject><NSCopying><NSSecureCoding> *deviceBuilderIdentifier;
@property (copy) NSSet *deviceDependencies;
@property (copy) NSObject<NSObject><NSCopying><NSSecureCoding> *deviceIdentifier;
@property NSUInteger priority;
@property (getter=isTransient) BOOL transient;


-(id)_initWithIdentifier:(id)arg0 attributes:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)setValue:(id)arg0 forAttribute:(id)arg1 ;


@end


#endif