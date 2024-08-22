// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFDIGEST_H
#define CARPFDIGEST_H

@class NSArray, NSString, NSData;
@protocol CARPFObject, NSCopying, NSSecureCoding;


#import "CARPFObject.h"

@interface CARPFDigest : CARPFObject <CARPFObject, NSCopying, NSSecureCoding>



@property (readonly) NSInteger algorithm; // ivar: _algorithm
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSData *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAlgorithm:(NSInteger)arg0 value:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif