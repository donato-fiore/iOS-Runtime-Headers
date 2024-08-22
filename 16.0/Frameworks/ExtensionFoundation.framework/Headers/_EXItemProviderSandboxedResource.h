// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EXITEMPROVIDERSANDBOXEDRESOURCE_H
#define _EXITEMPROVIDERSANDBOXEDRESOURCE_H

@class NSURL, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _EXItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isAccessingSecurityScopedResource) BOOL accessingSecurityScopedResource; // ivar: _accessingSecurityScopedResource
@property (copy, nonatomic) NSURL *resourceURL; // ivar: _resourceURL
@property (copy, nonatomic) NSData *sandboxExtensionToken; // ivar: _sandboxExtensionToken


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 auditToken:(struct ? )arg1 error:(*id)arg2 ;
-(id)resolveURLAndReturnError:(*id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif