// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUICARENDERER_H
#define PBUICARENDERER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBUICARenderer : NSObject {
    NSXPCConnection *_rendererServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) BOOL usesXPCService; // ivar: _usesXPCService


+(BOOL)defaultUsesXPCService;
+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(id)applyMaterialRecipe:(id)arg0 recipeName:(id)arg1 containingBundle:(id)arg2 weighting:(CGFloat)arg3 downsampleFactor:(CGFloat)arg4 ;
-(id)applyMaterialRecipe:(id)arg0 recipeName:(id)arg1 containingBundle:(id)arg2 weighting:(CGFloat)arg3 downsampleFactor:(CGFloat)arg4 scaleAdjustment:(id)arg5 ;
-(id)init;
-(id)treatWallpaperImage:(id)arg0 needsLuminanceTreatment:(BOOL)arg1 needsDimmingTreatment:(BOOL)arg2 downsampleFactor:(CGFloat)arg3 averageColor:(id)arg4 ;
-(id)treatWallpaperImageForInactiveAppearance:(id)arg0 downsampleFactor:(CGFloat)arg1 ;
-(void)_createConnection;


@end


#endif