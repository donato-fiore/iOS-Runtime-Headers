// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKGRAPHSERIESSECONDARYRENDERCONTEXT_H
#define HKGRAPHSERIESSECONDARYRENDERCONTEXT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HKGraphSeriesSecondaryRenderContext : NSObject {
    NSMutableArray *_aboveScreenRegions;
    NSMutableArray *_belowScreenRegions;
}




-(id)init;
-(void)addOffScreenRegionAtLocation:(CGFloat)arg0 color:(id)arg1 aboveScreen:(BOOL)arg2 ;
-(void)addOffScreenRegionWithStartLocation:(CGFloat)arg0 endLocation:(CGFloat)arg1 color:(id)arg2 aboveScreen:(BOOL)arg3 ;
-(void)drawInAxisRect:(struct CGRect )arg0 backgroundColor:(id)arg1 renderContext:(struct CGContext *)arg2 ;


@end


#endif