// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBINCALLPROXYSCENEBACKGROUNDVIEW_H
#define _SBINCALLPROXYSCENEBACKGROUNDVIEW_H

@class UIView, NSString;
@protocol SBApplicationSceneBackgroundView;



@interface _SBInCallProxySceneBackgroundView : UIView <SBApplicationSceneBackgroundView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsClassicModeBackground;
@property (weak, nonatomic) NSObject<SBApplicationSceneBackgroundView> *proxyTarget; // ivar: _proxyTarget
@property (nonatomic) BOOL shouldUseBrightMaterial;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transformOptions;
@property (nonatomic) NSInteger wallpaperStyle;


-(id)initWithFrame:(struct CGRect )arg0 proxyTarget:(id)arg1 ;


@end


#endif