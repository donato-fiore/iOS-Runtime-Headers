// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXHOSTCONFIGURATION_H
#define _EXHOSTCONFIGURATION_H

@class NSArray, NSString;
@protocol NSCopying, _EXExtensionRepresenting;

#import <Foundation/Foundation.h>

#import "_EXExtensionIdentity.h"
#import "_EXExtensionInstanceIdentifier.h"

@interface _EXHostConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) NSObject<_EXExtensionRepresenting> *extension; // ivar: _extension
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity; // ivar: _extensionIdentity
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier; // ivar: _instanceIdentifier
@property (copy) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy) NSArray *preferredLanguages; // ivar: _preferredLanguages
@property (copy) NSString *sandboxProfileName; // ivar: _sandboxProfileName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithExtension:(id)arg0 ;
-(id)initWithExtension:(id)arg0 instanceIdentifier:(id)arg1 ;
-(id)initWithExtensionIdentity:(id)arg0 ;
-(id)initWithExtensionIdentity:(id)arg0 instanceIdentifier:(id)arg1 ;
-(id)rbsProcessIdentity;


@end


#endif