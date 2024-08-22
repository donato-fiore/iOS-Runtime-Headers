// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKULTRACUBESWATCHRENDERER_H
#define NTKULTRACUBESWATCHRENDERER_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface NTKUltraCubeSwatchRenderer : NSObject {
    NSCache *_swatchCache;
}




+(BOOL)containsSwatchForKey:(id)arg0 ;
+(id)_sharedRenderer;
+(id)cachedSwatchForKey:(id)arg0 ;
+(id)renderSwatchForContentView:(id)arg0 device:(id)arg1 key:(id)arg2 ;
+(void)renderSwatchForContentView:(id)arg0 device:(id)arg1 key:(id)arg2 completion:(id)arg3 ;
-(BOOL)_isCATransactionCommitting;
-(id)_ca_renderSwatchWithCARenderServer:(id)arg0 forDevice:(id)arg1 ;
-(id)_cachedSwatchImageForKey:(id)arg0 ;
-(id)_init;
-(id)_renderSwatchForContentView:(id)arg0 device:(id)arg1 key:(id)arg2 ;
-(id)_ui_renderSwatchWithCARenderServer:(id)arg0 forDevice:(id)arg1 ;
-(void)_renderSwatchForContentView:(id)arg0 device:(id)arg1 key:(id)arg2 completion:(id)arg3 ;
-(void)_setSwatchImage:(id)arg0 forKey:(id)arg1 ;


@end


#endif