// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBICONDROPSHADOWPROVIDER_H
#define DBICONDROPSHADOWPROVIDER_H

@class UIImage;

#import <Foundation/Foundation.h>


@interface DBIconDropShadowProvider : NSObject

@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (nonatomic) *CGImage lightStyleShadowImage; // ivar: _lightStyleShadowImage


+(void)invalidate;
-(id)init;
-(void)_cleanupImages;
-(void)_shadow_drawing_queue_generateDarkStyleShadow;
-(void)_shadow_drawing_queue_generateLightStyleShadow;
-(void)imageForTraitCollection:(id)arg0 completion:(id)arg1 ;


@end


#endif