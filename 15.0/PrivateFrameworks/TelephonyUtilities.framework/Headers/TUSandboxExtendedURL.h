// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUSANDBOXEXTENDEDURL_H
#define TUSANDBOXEXTENDEDURL_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUSandboxExtendedURL : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) int pid; // ivar: _pid
@property (copy, nonatomic) NSString *sandboxExtensionClass; // ivar: _sandboxExtensionClass
@property (nonatomic) NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle
@property (copy, nonatomic) NSString *sandboxExtensionToken; // ivar: _sandboxExtensionToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSandboxExtendedURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif