// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPPRESETSOURCE_H
#define TSWPPRESETSOURCE_H

@protocol TSSPresetSource;

#import <Foundation/Foundation.h>


@interface TSWPPresetSource : NSObject <TSSPresetSource>





+(id)p_bootstrapStrokeInTheme:(id)arg0 alternate:(NSUInteger)arg1 index:(NSUInteger)arg2 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
+(void)p_bootstrapDropCapStylePresetsInTheme:(id)arg0 alternate:(NSUInteger)arg1 ;
+(void)p_bootstrapLinePresetsInTheme:(id)arg0 alternate:(NSUInteger)arg1 ;
+(void)p_bootstrapListPresetsInTheme:(id)arg0 alternate:(NSUInteger)arg1 ;
+(void)p_bootstrapShapePresetsInTheme:(id)arg0 alternate:(NSUInteger)arg1 ;
+(void)p_bootstrapTextStylePresetsInTheme:(id)arg0 alternate:(NSUInteger)arg1 ;
+(void)p_bootstrapTextboxPresetsInTheme:(id)arg0 alternate:(NSUInteger)arg1 ;


@end


#endif