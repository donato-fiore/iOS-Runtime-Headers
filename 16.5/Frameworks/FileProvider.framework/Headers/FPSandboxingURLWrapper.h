// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPSANDBOXINGURLWRAPPER_H
#define FPSANDBOXINGURLWRAPPER_H

@class NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FPSandboxingURLWrapper.h"

@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding>



@property (retain) FPSandboxingURLWrapper *originalDocumentURLWrapper; // ivar: _originalDocumentURLWrapper
@property (retain) NSData *promiseScope; // ivar: _promiseScope
@property (retain) NSURL *promiseURL; // ivar: _promiseURL
@property (retain) NSData *scope; // ivar: _scope
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)wrapperWithSecurityScopedURL:(id)arg0 ;
+(id)wrapperWithURL:(id)arg0 ;
+(id)wrapperWithURL:(id)arg0 extensionClass:(char *)arg1 error:(*id)arg2 ;
+(id)wrapperWithURL:(id)arg0 extensionClass:(char *)arg1 report:(BOOL)arg2 error:(*id)arg3 ;
+(id)wrapperWithURL:(id)arg0 readonly:(BOOL)arg1 ;
+(id)wrapperWithURL:(id)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
+(void)assembleURL:(id)arg0 sandbox:(id)arg1 physicalURL:(id)arg2 physicalSandbox:(id)arg3 ;
-(id)_init;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 extensionClass:(char *)arg1 report:(BOOL)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif