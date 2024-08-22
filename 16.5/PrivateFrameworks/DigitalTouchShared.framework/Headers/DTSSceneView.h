// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSSCENEVIEW_H
#define DTSSCENEVIEW_H

@class UIView, SKView, NSMutableDictionary;



@interface DTSSceneView : UIView {
    BOOL _shouldDelayLayout;
    BOOL _didDelayLayout;
    SKView *_sceneView;
}


@property (nonatomic) BOOL allowsTransparency; // ivar: _allowsTransparency
@property (nonatomic) BOOL ignoresSiblingOrder; // ivar: _ignoresSiblingOrder
@property (readonly) NSMutableDictionary *options;
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (nonatomic) BOOL shouldCullNonVisibleNodes; // ivar: _shouldCullNonVisibleNodes


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applicationDidBecomeActive;
-(void)_applicationDidEnterBackground;
-(void)_applicationWillEnterForeground;
-(void)_updateLayout;
-(void)layoutSubviews;
-(void)presentScene:(id)arg0 ;


@end


#endif