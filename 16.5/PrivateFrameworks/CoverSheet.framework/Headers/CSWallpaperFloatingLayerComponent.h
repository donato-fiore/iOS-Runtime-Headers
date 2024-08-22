// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSWALLPAPERFLOATINGLAYERCOMPONENT_H
#define CSWALLPAPERFLOATINGLAYERCOMPONENT_H



#import "CSComponent.h"

@interface CSWallpaperFloatingLayerComponent : CSComponent

@property (nonatomic) BOOL shouldMatchMove;
@property (nonatomic) BOOL shouldRenderForPosterSwitcher;
@property (nonatomic) BOOL shouldRenderInline;


-(id)init;
-(id)shouldMatchMove:(BOOL)arg0 ;
-(id)shouldRenderForPosterSwitcher:(BOOL)arg0 ;
-(id)shouldRenderInline:(BOOL)arg0 ;


@end


#endif