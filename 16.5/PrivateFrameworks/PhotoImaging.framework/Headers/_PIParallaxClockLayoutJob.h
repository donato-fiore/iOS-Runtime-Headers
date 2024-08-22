// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXCLOCKLAYOUTJOB_H
#define _PIPARALLAXCLOCKLAYOUTJOB_H

@class NURenderJob, NSString, PFParallaxLayout, CIImage;
@protocol PFParallaxLayoutConfiguration;


#import "PIParallaxClockLayoutRequest.h"

@interface _PIParallaxClockLayoutJob : NURenderJob

@property (nonatomic) NSUInteger clockIntersection; // ivar: _clockIntersection
@property (retain, nonatomic) NSString *clockLayerOrder; // ivar: _clockLayerOrder
@property (readonly, nonatomic) PIParallaxClockLayoutRequest *clockLayoutRequest;
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (retain, nonatomic) CIImage *matteImage; // ivar: _matteImage


-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderStage;
-(id)initWithParallaxClockLayoutRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;


@end


#endif