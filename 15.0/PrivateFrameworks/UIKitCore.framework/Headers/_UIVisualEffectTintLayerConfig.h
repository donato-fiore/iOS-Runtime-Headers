// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVISUALEFFECTTINTLAYERCONFIG_H
#define _UIVISUALEFFECTTINTLAYERCONFIG_H

@class UIVisualEffectLayerConfig;


#import "UIColor.h"

@interface _UIVisualEffectTintLayerConfig : UIVisualEffectLayerConfig

@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(id)layerWithTintColor:(id)arg0 ;
+(id)layerWithTintColor:(id)arg0 filterType:(id)arg1 ;
-(id)description;
-(void)configureLayerView:(id)arg0 ;
-(void)deconfigureLayerView:(id)arg0 ;


@end


#endif