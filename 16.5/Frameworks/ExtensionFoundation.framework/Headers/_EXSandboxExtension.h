// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXSANDBOXEXTENSION_H
#define _EXSANDBOXEXTENSION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _EXSandboxExtension : NSObject <NSSecureCoding>



@property NSUInteger consumedSandboxExtension; // ivar: _consumedSandboxExtension
@property (retain) NSString *sandboxExtensionToken; // ivar: _sandboxExtensionToken


+(BOOL)sandboxed;
+(BOOL)supportsSecureCoding;
-(BOOL)consume;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionClass:(id)arg0 machServiceName:(id)arg1 process:(struct ? )arg2 ;
-(id)initWithURL:(id)arg0 readonly:(BOOL)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif