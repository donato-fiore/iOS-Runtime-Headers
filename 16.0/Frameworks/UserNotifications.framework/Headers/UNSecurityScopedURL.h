// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSECURITYSCOPEDURL_H
#define UNSECURITYSCOPEDURL_H

@class NSURL, NSString;



@interface UNSecurityScopedURL : NSURL {
    NSString *_sandboxExtensionClass;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_allowsDirectEncoding;
-(id)_issueSandboxExtension;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFileURLWithPath:(id)arg0 sandboxExtensionClass:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif