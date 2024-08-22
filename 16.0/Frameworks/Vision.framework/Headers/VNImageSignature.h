// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGESIGNATURE_H
#define VNIMAGESIGNATURE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNImageSignature : NSObject <NSSecureCoding>

 {
    FastRegistration_Signatures _signature;
}


@property (readonly) *FastRegistration_Signatures signature;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageBuffer:(id)arg0 regionOfInterest:(struct CGRect )arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif