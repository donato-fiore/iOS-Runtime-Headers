// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTREAMINGCVAFILTERRENDERERPARAMETERS_H
#define BWSTREAMINGCVAFILTERRENDERERPARAMETERS_H

@class NSData, CIFilter, NSString;
@protocol BWFilterRendererParameters;

#import <Foundation/Foundation.h>

#import "BWColorLookupCache.h"

@interface BWStreamingCVAFilterRendererParameters : NSObject <BWFilterRendererParameters>

 {
    BOOL _studioAndContourRenderingEnabled;
    BOOL _stageRenderingEnabled;
}


@property (retain, nonatomic) NSData *backgroundColorLookupTable; // ivar: _backgroundColorLookupTable
@property (retain, nonatomic) CIFilter *colorFilter; // ivar: _colorFilter
@property (readonly, retain, nonatomic) BWColorLookupCache *colorLookupCache; // ivar: _colorLookupCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *foregroundColorLookupTable; // ivar: _foregroundColorLookupTable
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float interpolationFractionComplete; // ivar: _interpolationFractionComplete
@property (readonly, nonatomic) NSInteger renderingStrategy; // ivar: _renderingStrategy
@property (readonly) Class superclass;
@property (readonly, nonatomic) short type;


+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColorFilter:(id)arg0 colorLookupCache:(id)arg1 studioAndContourRenderingEnabled:(BOOL)arg2 stageRenderingEnabled:(BOOL)arg3 ;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg0 ;
-(void)dealloc;
-(void)updateByInterpolatingFromParameters:(id)arg0 toParameters:(id)arg1 withFractionComplete:(float)arg2 ;


@end


#endif