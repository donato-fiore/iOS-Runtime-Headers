// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKWIDGETCOMPLICATIONDESCRIPTOR_H
#define CLKWIDGETCOMPLICATIONDESCRIPTOR_H

@class NSString, INIntent;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CLKWidgetComplicationDescriptor : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDescriptor:(id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 ;
-(id)initWithExtensionBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 kind:(id)arg2 intent:(id)arg3 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif