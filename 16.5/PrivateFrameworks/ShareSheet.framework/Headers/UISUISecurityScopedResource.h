// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISUISECURITYSCOPEDRESOURCE_H
#define UISUISECURITYSCOPEDRESOURCE_H

@class FPSandboxingURLWrapper, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UISUISecurityScopedResource : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger allowedAccess; // ivar: _allowedAccess
@property (nonatomic) BOOL hasActiveAccessAssertion; // ivar: _hasActiveAccessAssertion
@property (readonly, nonatomic) BOOL isContentManaged;
@property (retain, nonatomic) FPSandboxingURLWrapper *sandboxExtensionWrapper; // ivar: _sandboxExtensionWrapper
@property (nonatomic) NSInteger underlyingSandboxAssertionHandle; // ivar: _underlyingSandboxAssertionHandle
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)_isValidURLForIssuingSandboxExtension:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_sandboxExtensionClassForAllowedAccess:(NSInteger)arg0 ;
+(id)_scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg0 traversalStopPaths:(id)arg1 allowedAccess:(NSInteger)arg2 ;
+(id)readonlySandboxExtensionClassString;
+(id)readwriteSandboxExtensionClassString;
+(id)scopedResourceWithAbsolutePath:(id)arg0 allowedAccess:(NSInteger)arg1 ;
+(id)scopedResourceWithFileURL:(id)arg0 allowedAccess:(NSInteger)arg1 ;
+(id)scopedResourceWithURL:(id)arg0 allowedAccess:(NSInteger)arg1 ;
+(id)scopedResourcesForAncestorsOfItemWithAbsolutePath:(id)arg0 traversalStopPaths:(id)arg1 allowedAccess:(NSInteger)arg2 ;
+(id)uniquedSecurityScopedResources:(id)arg0 ;
-(BOOL)_isEqualAccessToSecurityScopedResource:(id)arg0 ;
-(BOOL)startAccessing;
-(id)description;
-(id)initWithAbsoluteURL:(id)arg0 sandboxExtensionWrapper:(id)arg1 allowedAccess:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)stopAccessing;


@end


#endif