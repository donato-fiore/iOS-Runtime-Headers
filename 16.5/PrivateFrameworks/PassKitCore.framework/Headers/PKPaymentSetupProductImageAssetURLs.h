// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPPRODUCTIMAGEASSETURLS_H
#define PKPAYMENTSETUPPRODUCTIMAGEASSETURLS_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupProductImageAssetURLs : NSObject <NSCopying>



@property (readonly, nonatomic) NSURL *digitalCardImageUrl; // ivar: _digitalCardImageUrl
@property (readonly, nonatomic) NSURL *logoImageUrl; // ivar: _logoImageUrl
@property (readonly, nonatomic) NSURL *thumbnailImageUrl; // ivar: _thumbnailImageUrl


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageAssetsDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif