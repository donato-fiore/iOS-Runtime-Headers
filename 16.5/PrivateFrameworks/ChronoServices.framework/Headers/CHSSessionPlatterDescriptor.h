// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSSESSIONPLATTERDESCRIPTOR_H
#define CHSSESSIONPLATTERDESCRIPTOR_H

@class NSData;
@protocol NSMutableCopying, NSSecureCoding;


#import "CHSBaseDescriptor.h"

@interface CHSSessionPlatterDescriptor : CHSBaseDescriptor <NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *activityAttributesType; // ivar: _activityAttributesType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDescriptor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 supportedFamilies:(NSUInteger)arg2 activityAttributesType:(id)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)widgetForFamily:(NSInteger)arg0 activityIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif