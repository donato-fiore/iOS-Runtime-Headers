// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHSTYLEBOOTSTRAPPING_H
#define TSCHSTYLEBOOTSTRAPPING_H

@protocol TSSPresetSource;

#import <Foundation/Foundation.h>


@interface TSCHStyleBootstrapping : NSObject <TSSPresetSource>





+(id)p_bootstrappedStylePresetInContext:(id)arg0 stylesheet:(id)arg1 presetIndex:(NSUInteger)arg2 ;
+(id)p_defaultParagraphStyleOfClass:(Class)arg0 stylesheet:(id)arg1 identifier:(id)arg2 ;
+(id)p_defaultStyleOfClass:(Class)arg0 stylesheet:(id)arg1 identifier:(id)arg2 ;
+(id)presetKinds;
+(id)stylePresetForStylesheet:(id)arg0 roleIndex:(NSUInteger)arg1 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 reservedCount:(NSUInteger)arg3 ;
+(void)bootstrapStylesInStylesheet:(id)arg0 numberOfPresets:(NSUInteger)arg1 ;


@end


#endif