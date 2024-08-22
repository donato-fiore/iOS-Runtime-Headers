// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWMETALCOLORCUBERENDERERPARAMETERS_H
#define BWMETALCOLORCUBERENDERERPARAMETERS_H

@class NSData, CIFilter, NSString;
@protocol BWFilterRendererParameters;

#import <Foundation/Foundation.h>

#import "BWColorLookupCache.h"

@interface BWMetalColorCubeRendererParameters : NSObject <BWFilterRendererParameters>



@property (retain, nonatomic) NSData *backgroundColorLookupTable; // ivar: _backgroundColorLookupTable
@property (retain, nonatomic) CIFilter *colorFilter; // ivar: _colorFilter
@property (readonly, retain, nonatomic) BWColorLookupCache *colorLookupCache; // ivar: _colorLookupCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *foregroundColorLookupTable; // ivar: _foregroundColorLookupTable
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float interpolationFractionComplete; // ivar: _interpolationFractionComplete
@property (readonly) Class superclass;
@property (readonly, nonatomic) short type;


+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColorFilter:(id)arg0 colorLookupCache:(id)arg1 ;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg0 ;
-(void)dealloc;
-(void)updateByInterpolatingFromParameters:(id)arg0 toParameters:(id)arg1 withFractionComplete:(float)arg2 ;


@end


#endif