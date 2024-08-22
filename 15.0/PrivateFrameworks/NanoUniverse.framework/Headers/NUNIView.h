// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUNIVIEW_H
#define NUNIVIEW_H

@class UIView, CLKDevice, CLKUIQuadView, CLKUIResourceProviderKey, NSBundle, NSString;
@protocol CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate, NUNIViewDelegate;


#import "NUNIResources.h"
#import "NUNIMetalQuad.h"
#import "NUNIScene.h"

@interface NUNIView : UIView <CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate>

 {
    CLKDevice *_device;
    CLKUIQuadView *_quadView;
    CLKUIResourceProviderKey *_resourceProviderKey;
    NUNIResources *_resources;
    NUNIMetalQuad *_quad;
    NSBundle *_bundle;
    NSString *_textureSuffix;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUNIViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NUNIScene *scene;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 textureSuffix:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 textureSuffix:(id)arg1 colorSpace:(NSInteger)arg2 ;
-(id)provideAtlasBacking:(id)arg0 ;
-(id)quadView;
-(id)resourceProviderKey;
-(void)dealloc;
-(void)layoutSubviews;
-(void)quadViewWillDisplay:(id)arg0 forTime:(CGFloat)arg1 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)setAnimationFrameInterval:(int)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif