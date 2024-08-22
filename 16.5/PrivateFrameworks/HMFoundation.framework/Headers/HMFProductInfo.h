// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFPRODUCTINFO_H
#define HMFPRODUCTINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;


#import "HMFObject.h"
#import "HMFSoftwareVersion.h"

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (readonly) NSInteger productClass; // ivar: _productClass
@property (readonly, nonatomic) NSInteger productColor; // ivar: _productColor
@property (readonly) NSInteger productPlatform; // ivar: _productPlatform
@property (readonly) NSInteger productVariant; // ivar: _productVariant
@property (readonly, nonatomic) HMFSoftwareVersion *softwareVersion; // ivar: _softwareVersion


+(BOOL)supportsSecureCoding;
+(id)decodeSoftwareVersionWithCoder:(id)arg0 ;
+(id)productInfo;
+(id)shortDescription;
+(void)encodeSoftwareVersion:(id)arg0 withCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlatform:(NSInteger)arg0 class:(NSInteger)arg1 softwareVersion:(id)arg2 ;
-(id)initWithPlatform:(NSInteger)arg0 class:(NSInteger)arg1 softwareVersion:(id)arg2 modelIdentifier:(id)arg3 ;
-(id)initWithPlatform:(NSInteger)arg0 class:(NSInteger)arg1 variant:(NSInteger)arg2 softwareVersion:(id)arg3 ;
-(id)initWithPlatform:(NSInteger)arg0 class:(NSInteger)arg1 variant:(NSInteger)arg2 softwareVersion:(id)arg3 color:(NSInteger)arg4 ;
-(id)initWithPlatform:(NSInteger)arg0 class:(NSInteger)arg1 variant:(NSInteger)arg2 softwareVersion:(id)arg3 color:(NSInteger)arg4 modelIdentifier:(id)arg5 ;
-(id)privateDescription;
-(id)shortDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif