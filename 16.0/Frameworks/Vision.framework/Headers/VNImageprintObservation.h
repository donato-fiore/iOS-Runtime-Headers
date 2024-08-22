// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEPRINTOBSERVATION_H
#define VNIMAGEPRINTOBSERVATION_H

@class NSString, NSData;


#import "VNObservation.h"
#import "VNImageprint.h"

@interface VNImageprintObservation : VNObservation

@property (retain, nonatomic) VNImageprint *imageprint; // ivar: _imageprint
@property (readonly, nonatomic) BOOL imageprintValid; // ivar: _imageprintValid
@property (readonly, copy, nonatomic) NSString *imageprintVersion; // ivar: _imageprintVersion
@property (readonly, nonatomic) NSData *rawImageprintDescriptor;


+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)observationWithImageprint:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isImageprintValid;
-(NSUInteger)hash;
-(float)calculateDistanceFromImageprintObservation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawImageprintDescriptor:(id)arg0 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif