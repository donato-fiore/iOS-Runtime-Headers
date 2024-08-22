// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARQLSANDBOXINGURLWRAPPER_H
#define ARQLSANDBOXINGURLWRAPPER_H

@class NSURL, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARQLSandboxingURLWrapper : NSObject <NSSecureCoding>

 {
    NSURL *_promiseURL;
    NSData *_scope;
    NSData *_promiseScope;
}


@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)wrapperWithURL:(id)arg0 extensionClass:(char *)arg1 error:(*id)arg2 ;
+(id)wrapperWithURL:(id)arg0 extensionClass:(char *)arg1 report:(BOOL)arg2 error:(*id)arg3 ;
+(id)wrapperWithURL:(id)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
+(void)assembleURL:(id)arg0 sandbox:(id)arg1 physicalURL:(id)arg2 physicalSandbox:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 extensionClass:(char *)arg1 report:(BOOL)arg2 error:(*id)arg3 ;
-(id)issueSandboxExtensionForURL:(id)arg0 extensionClass:(char *)arg1 report:(BOOL)arg2 error:(*id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif