// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDACCESSORYIDENTIFIER_H
#define FMDACCESSORYIDENTIFIER_H

@class NSString;
@protocol FMDCodable, NSCopying, FMDIdentifiable;

#import <Foundation/Foundation.h>


@interface FMDAccessoryIdentifier : NSObject <FMDCodable, NSCopying, FMDIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
-(BOOL)encodeWithFMDCoder:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)computeAccessoryIdentifierWithAddress:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAddress:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceVendor:(id)arg0 deviceProductId:(id)arg1 ;
-(id)initWithFMDCoder:(id)arg0 error:(*id)arg1 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif