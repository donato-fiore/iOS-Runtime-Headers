// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNPIXELBUFFEROBSERVATION_H
#define VNPIXELBUFFEROBSERVATION_H

@class NSString;


#import "VNObservation.h"

@interface VNPixelBufferObservation : VNObservation

@property (readonly, copy, nonatomic) NSString *featureName; // ivar: _featureName
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 featureName:(id)arg1 CVPixelBuffer:(struct __CVBuffer *)arg2 ;
-(id)vn_cloneObject;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif