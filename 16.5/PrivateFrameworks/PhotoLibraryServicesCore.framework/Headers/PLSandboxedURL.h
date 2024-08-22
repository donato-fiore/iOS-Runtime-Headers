// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSANDBOXEDURL_H
#define PLSANDBOXEDURL_H

@class NSURL, NSString;



@interface PLSandboxedURL : NSURL {
    NSString *_sandboxExtensionToken;
    NSInteger _sandboxExtensionHandle;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFileURLWithPath:(id)arg0 sandboxExtensionToken:(id)arg1 consume:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 sandboxExtensionToken:(id)arg1 consume:(BOOL)arg2 ;
-(void)_commonPLSandboxedURLInitialize;
-(void)_initSandboxExtensionToken:(id)arg0 consume:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif