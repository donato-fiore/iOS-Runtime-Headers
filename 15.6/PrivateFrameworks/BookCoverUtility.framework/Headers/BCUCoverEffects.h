// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCUCOVEREFFECTS_H
#define BCUCOVEREFFECTS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "BCULayerRenderer.h"

@interface BCUCoverEffects : NSObject {
    BCULayerRenderer *_renderer;
    NSArray *_bookFilters;
    NSArray *_seriesFilters;
    NSArray *_templateImageFilters;
}




+(id)_effectIdentifierForEffectIndex:(NSUInteger)arg0 ;
+(id)effectIdentifierForAsset:(id)arg0 withEnvironment:(id)arg1 ;
+(id)effectIdentifierForFilterInfo:(id)arg0 ;
+(id)effectIdentifierWithRTL:(BOOL)arg0 style:(NSUInteger)arg1 content:(NSUInteger)arg2 nightMode:(BOOL)arg3 ;
+(struct CGImage *)restrictedImageFrom:(struct CGImage *)arg0 size:(struct CGSize )arg1 ;
-(id)bookCoverEffectFilterForEffectIdentifier:(id)arg0 ;
-(id)bookCoverEffectFilters;
-(id)initWithRenderer:(id)arg0 ;
-(id)seriesCoverEffectFilters;
-(id)templateImageFilters;
-(id)welcomeScreenBookCoverEffectFilters;


@end


#endif