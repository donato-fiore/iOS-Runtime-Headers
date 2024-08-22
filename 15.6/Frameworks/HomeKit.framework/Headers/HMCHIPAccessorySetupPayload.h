// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCHIPACCESSORYSETUPPAYLOAD_H
#define HMCHIPACCESSORYSETUPPAYLOAD_H

@class NSArray, NSString, NSNumber;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCHIPAccessorySetupPayload : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (copy, nonatomic) NSNumber *productID; // ivar: _productID
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic) BOOL requiresCustomFlow; // ivar: _requiresCustomFlow
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, copy, nonatomic) NSNumber *setupCode; // ivar: _setupCode
@property (copy, nonatomic) NSString *setupPayloadString; // ivar: _setupPayloadString
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *vendorID; // ivar: _vendorID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSetupCode:(id)arg0 discriminator:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif