// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXSANDBOXEXTENDEDURL_H
#define CXSANDBOXEXTENDEDURL_H

@class NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CXSandboxExtendedURL : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) NSInteger sandboxExtensionHandle; // ivar: _sandboxExtensionHandle
@property (copy, nonatomic) NSString *sandboxExtensionToken; // ivar: _sandboxExtensionToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSandboxExtendedURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif