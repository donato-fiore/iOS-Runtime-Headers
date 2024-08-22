// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPPLUGINACCESSORYSETUPPAYLOAD_H
#define CHIPPLUGINACCESSORYSETUPPAYLOAD_H

@class HMFObject, NSNumber, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;



@interface CHIPPluginAccessorySetupPayload : HMFObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) NSNumber *category; // ivar: _category
@property (readonly, copy, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (copy, nonatomic) NSNumber *productID; // ivar: _productID
@property (nonatomic) BOOL requiresCustomFlow; // ivar: _requiresCustomFlow
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy, nonatomic) NSNumber *setupCode; // ivar: _setupCode
@property (readonly, copy, nonatomic) NSString *setupID;
@property (copy, nonatomic) NSNumber *vendorID; // ivar: _vendorID


+(BOOL)isValidSetupPayloadURLScheme:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCHIPSetupPayload:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetupCode:(id)arg0 discriminator:(id)arg1 ;
-(id)initWithSetupCodeString:(id)arg0 ;
-(id)initWithSetupPayloadString:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)privateDescription;
-(id)shortDescription;
-(void)_updateCategory;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif