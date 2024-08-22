// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICEREQUESTAUTHENTICATIONCONTEXT_H
#define PKAPPLYWEBSERVICEREQUESTAUTHENTICATIONCONTEXT_H

@class NSArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKApplyWebServiceRequestAuthenticationContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (copy, nonatomic) NSData *signature; // ivar: _signature
@property (copy, nonatomic) NSData *signaturePayload; // ivar: _signaturePayload


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif