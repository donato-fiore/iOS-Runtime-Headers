// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNUIKITSOURCE_H
#define SCNUIKITSOURCE_H

@class CALayer, UIView, UIWindow;


#import "SCNImageSource.h"

@interface SCNUIKitSource : SCNImageSource {
    CALayer *_uiWindowLayer;
    BOOL _isOpaque;
    BOOL _windowPreparing;
}


@property (retain, nonatomic) UIView *uiView; // ivar: _uiView
@property (retain, nonatomic) UIWindow *uiWindow; // ivar: _uiWindow


-(BOOL)isOpaque;
-(BOOL)supportsMetal;
-(id)init;
-(id)prepareWindowIfNeeded;
-(id)textureSource;
-(void)dealloc;


@end


#endif