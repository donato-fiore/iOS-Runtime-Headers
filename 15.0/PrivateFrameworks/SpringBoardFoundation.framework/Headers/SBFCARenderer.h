// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFCARENDERER_H
#define SBFCARENDERER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SBFCARenderer : NSObject {
    NSXPCConnection *_rendererServiceConnection;
}




+(BOOL)shouldUseXPCServiceForRendering;
+(id)sharedInstance;
-(id)_remoteObjectProxy;
-(id)applyMaterialRecipe:(id)arg0 recipeName:(id)arg1 containingBundle:(id)arg2 weighting:(CGFloat)arg3 downsampleFactor:(CGFloat)arg4 ;
-(id)treatWallpaperImage:(id)arg0 needsLuminanceTreatment:(BOOL)arg1 needsDimmingTreatment:(BOOL)arg2 downsampleFactor:(CGFloat)arg3 averageColor:(id)arg4 ;
-(void)_createConnection;
-(void)warmup;


@end


#endif