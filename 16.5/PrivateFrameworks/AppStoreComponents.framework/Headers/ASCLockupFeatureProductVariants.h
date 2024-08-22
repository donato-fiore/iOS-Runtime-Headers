// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCLOCKUPFEATUREPRODUCTVARIANTS_H
#define ASCLOCKUPFEATUREPRODUCTVARIANTS_H

@class NSString;
@protocol ASCLockupFeature;

#import <Foundation/Foundation.h>


@interface ASCLockupFeatureProductVariants : NSObject <ASCLockupFeature>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *productVariantID; // ivar: _productVariantID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProductVariantID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif