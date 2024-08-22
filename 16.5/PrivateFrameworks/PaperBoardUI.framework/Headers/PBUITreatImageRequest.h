// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUITREATIMAGEREQUEST_H
#define PBUITREATIMAGEREQUEST_H

@class NSString;
@protocol CALayerDelegate, PBUIRenderRequest, NSCopying, NSSecureCoding, BSDescriptionProviding, PBUIImageTreatment;

#import <Foundation/Foundation.h>

#import "PBUICodableImage.h"

@interface PBUITreatImageRequest : NSObject <CALayerDelegate, PBUIRenderRequest, NSCopying, NSSecureCoding, BSDescriptionProviding>

 {
    PBUICodableImage *_codableImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat downscaleFactor; // ivar: _downscaleFactor
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) *CGImage image; // ivar: _image
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PBUIImageTreatment> *treatment; // ivar: _treatment


+(BOOL)supportsSecureCoding;
+(id)secureCodableTreatmentClasses;
-(BOOL)configureState:(struct PBUIRenderState *)arg0 error:(*id)arg1 ;
-(BOOL)usesCoreImageForTreatment:(id)arg0 ;
-(id)CIImage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 downscaleFactor:(CGFloat)arg1 treatment:(id)arg2 ;
-(id)initWithImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 downscaleFactor:(CGFloat)arg2 treatment:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGSize )requestedOutputSizeInPixels;
-(struct CGSize )requestedOutputSizeInPointsAtScale:(CGFloat)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;


@end


#endif