// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKWALLETMERCHANTSTYLINGINFO_H
#define MKWALLETMERCHANTSTYLINGINFO_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding>

 {
    NSData *_styleAttributesData;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_featureStyleAttributes;
-(id)description;
-(id)imageForSize:(NSUInteger)arg0 scale:(CGFloat)arg1 ;
-(id)imageForSize:(NSUInteger)arg0 scale:(CGFloat)arg1 transparent:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyleAttributes:(id)arg0 ;
-(id)tintColorForScale:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif