// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWIOSURFACETRACKING_H
#define BWIOSURFACETRACKING_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface BWIOSurfaceTracking : NSObject {
    os_unfair_lock_s _trackedSurfacesLock;
    NSMutableArray *_trackedSurfaces;
}




+(id)defaultSurfaceTracking;
+(void)initialize;
+(void)noteSurfaceIDInUse:(unsigned int)arg0 byClient:(id)arg1 ;
+(void)noteSurfaceIDNoLongerInUse:(unsigned int)arg0 byClient:(id)arg1 ;
+(void)trackPixelBuffer:(struct __CVBuffer *)arg0 surfaceUseCountIsZeroHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)noteSurfaceIDInUse:(unsigned int)arg0 ;
-(void)noteSurfaceIDNoLongerInUse:(unsigned int)arg0 ;
-(void)trackPixelBuffer:(struct __CVBuffer *)arg0 surfaceUseCountIsZeroHandler:(id)arg1 ;


@end


#endif