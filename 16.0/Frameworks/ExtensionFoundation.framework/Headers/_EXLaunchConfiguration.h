// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXLAUNCHCONFIGURATION_H
#define _EXLAUNCHCONFIGURATION_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_EXExtensionIdentity.h"
#import "_EXExtensionInstanceIdentifier.h"

@interface _EXLaunchConfiguration : NSObject <NSSecureCoding>



@property (readonly) _EXExtensionIdentity *extensionIdentity; // ivar: _extensionIdentity
@property (retain) _EXExtensionInstanceIdentifier *instanceIdentifier; // ivar: _instanceIdentifier
@property (copy) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (copy) NSString *sandboxProfileName; // ivar: _sandboxProfileName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLaunchConfigurationEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionIdentity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif