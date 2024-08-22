// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVISUALEFFECTLAYERCONFIG_H
#define _UIVISUALEFFECTLAYERCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIVisualEffectLayerConfig : NSObject

@property (readonly, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (readonly, nonatomic) NSString *filterType; // ivar: _filterType
@property (readonly, nonatomic) CGFloat opacity; // ivar: _opacity


+(id)layerWithFillColor:(id)arg0 opacity:(CGFloat)arg1 filterType:(id)arg2 ;
-(id)description;
-(void)configureLayerView:(id)arg0 ;
-(void)deconfigureLayerView:(id)arg0 ;


@end


#endif