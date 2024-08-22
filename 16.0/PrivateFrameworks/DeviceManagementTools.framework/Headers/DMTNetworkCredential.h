// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMTNETWORKCREDENTIAL_H
#define DMTNETWORKCREDENTIAL_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DMTNetworkCredential : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *credential; // ivar: _credential
@property (readonly, nonatomic) NSString *networkName; // ivar: _networkName


+(BOOL)supportsSecureCoding;
+(id)credentialWithNetworkName:(id)arg0 credential:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCredential:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNetworkName:(id)arg0 credential:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif