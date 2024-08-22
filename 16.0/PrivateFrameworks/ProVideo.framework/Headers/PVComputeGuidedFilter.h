// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCOMPUTEGUIDEDFILTER_H
#define PVCOMPUTEGUIDEDFILTER_H


#import <Foundation/Foundation.h>

#import "PVImageBuffer.h"

@interface PVComputeGuidedFilter : NSObject {
    PVImageBuffer *_guide;
}


@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) int radius; // ivar: _radius


-(BOOL)applyFilterToInput:(id)arg0 output:(id)arg1 ;
-(BOOL)runCPUPathOnInput:(*void)arg0 guide:(*void)arg1 output:(*void)arg2 radius:(int)arg3 epsilon:(float)arg4 ;
-(id)initWithGuide:(id)arg0 radius:(int)arg1 epsilon:(float)arg2 ;
-(void)processStage1Float32Input:(*float)arg0 inputRowBytes:(NSUInteger)arg1 guide:(*float)arg2 guideRowBytes:(NSUInteger)arg3 output:(*float)arg4 outputRowBytes:(NSUInteger)arg5 width:(int)arg6 height:(int)arg7 radius:(int)arg8 ;
-(void)processStage1UInt8Input:(char *)arg0 inputRowBytes:(NSUInteger)arg1 guide:(char *)arg2 guideRowBytes:(NSUInteger)arg3 output:(*float)arg4 outputRowBytes:(NSUInteger)arg5 width:(int)arg6 height:(int)arg7 radius:(int)arg8 ;
-(void)processStage5Float32Guide:(*float)arg0 guideRowBytes:(NSUInteger)arg1 stats:(*float)arg2 statsRowBytes:(NSUInteger)arg3 output:(*float)arg4 outputRowBytes:(NSUInteger)arg5 width:(int)arg6 height:(int)arg7 radius:(int)arg8 ;
-(void)processStage5UInt6Guide:(char *)arg0 guideRowBytes:(NSUInteger)arg1 stats:(*float)arg2 statsRowBytes:(NSUInteger)arg3 output:(char *)arg4 outputRowBytes:(NSUInteger)arg5 width:(int)arg6 height:(int)arg7 radius:(int)arg8 ;


@end


#endif