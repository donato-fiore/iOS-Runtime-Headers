// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWCOREIMAGEFILTERRENDERERPARAMETERS_H
#define BWCOREIMAGEFILTERRENDERERPARAMETERS_H

@class NSString, NSArray, CIFilter;
@protocol BWFilterRendererParameters;

#import <Foundation/Foundation.h>


@interface BWCoreImageFilterRendererParameters : NSObject <BWFilterRendererParameters>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float interpolationFractionComplete;
@property (retain, nonatomic) CIFilter *originalOutputFilter; // ivar: _originalOutputFilter
@property (readonly, nonatomic) BOOL requiresDepthMap; // ivar: _requiresDepthMap
@property (readonly, nonatomic) BOOL requiresFaceLandmarks; // ivar: _requiresFaceLandmarks
@property (readonly) Class superclass;
@property (readonly, nonatomic) short type;


+(BOOL)containsFilterRequiringFaceLandmarks:(id)arg0 ;
+(void)initialize;
-(BOOL)shouldInterpolateFromParameters:(id)arg0 toParameters:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFilters:(id)arg0 originalOutputFilter:(id)arg1 ;
-(int)depthTypeForFilter:(id)arg0 ;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg0 ;
-(void)_ensureResourceRequirementsForFilters:(id)arg0 outputRequiresFaceLandmarks:(*BOOL)arg1 outputRequiresDepthMap:(*BOOL)arg2 ;
-(void)dealloc;
-(void)updateByInterpolatingFromParameters:(id)arg0 toParameters:(id)arg1 withFractionComplete:(float)arg2 ;


@end


#endif