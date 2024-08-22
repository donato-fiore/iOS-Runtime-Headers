// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSWIDGET_H
#define PRSWIDGET_H

@class NSString, INIntent;
@protocol NSSecureCoding, BSXPCSecureCoding, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface PRSWidget : NSObject <NSSecureCoding, BSXPCSecureCoding, NSCopying, BSDescriptionProviding>



@property (copy, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (nonatomic) NSUInteger family; // ivar: _family
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 kind:(id)arg1 extensionBundleIdentifier:(id)arg2 containerBundleIdentifier:(id)arg3 family:(NSUInteger)arg4 intent:(id)arg5 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif