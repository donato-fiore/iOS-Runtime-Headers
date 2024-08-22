// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PIPARALLAXLAYOUTINACTIVEFRAMEJOB_H
#define _PIPARALLAXLAYOUTINACTIVEFRAMEJOB_H

@class NURenderJob, PFParallaxLayout, CIImage;
@protocol PFParallaxLayoutConfiguration;


#import "PIParallaxLayoutInactiveFrameRequest.h"

@interface _PIParallaxLayoutInactiveFrameJob : NURenderJob

@property (nonatomic) CGRect inactiveRect; // ivar: _inactiveRect
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (readonly, nonatomic) PIParallaxLayoutInactiveFrameRequest *layoutInactiveFrameRequest;
@property (retain, nonatomic) CIImage *matteImage; // ivar: _matteImage


-(BOOL)complete:(*id)arg0 ;
-(BOOL)prepare:(*id)arg0 ;
-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(BOOL)wantsRenderStage;
-(id)initWithParallaxLayoutInactiveFrameRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;


@end


#endif