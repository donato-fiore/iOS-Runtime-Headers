// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCROSSPLATFORMSHAREURL_H
#define PKCROSSPLATFORMSHAREURL_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKCrossPlatformShareURL : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *expectedPairedReaderIdentifier; // ivar: _expectedPairedReaderIdentifier
@property (readonly, nonatomic) NSString *expectedProvisioningCredentialHash; // ivar: _expectedProvisioningCredentialHash
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCrossPlatformShareURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 expectedPairedReaderIdentifier:(id)arg1 expectedProvisioningCredentialHash:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif