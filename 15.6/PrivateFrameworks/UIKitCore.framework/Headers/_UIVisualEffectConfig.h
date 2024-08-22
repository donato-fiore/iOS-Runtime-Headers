// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVISUALEFFECTCONFIG_H
#define _UIVISUALEFFECTCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_UIVisualEffectLayerConfig.h"

@interface _UIVisualEffectConfig : NSObject

@property (readonly, nonatomic) _UIVisualEffectLayerConfig *contentConfig; // ivar: _contentConfig
@property (readonly, nonatomic) NSArray *layerConfigs; // ivar: _layerConfigs


+(id)configWithContentConfig:(id)arg0 ;
+(id)configWithLayerConfigs:(id)arg0 ;
-(id)description;
-(void)addLayerConfig:(id)arg0 ;
-(void)enumerateLayerConfigs:(id)arg0 ;


@end


#endif