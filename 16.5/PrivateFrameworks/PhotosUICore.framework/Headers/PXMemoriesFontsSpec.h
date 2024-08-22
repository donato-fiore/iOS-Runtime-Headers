// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFONTSSPEC_H
#define PXMEMORIESFONTSSPEC_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PXMemoriesFontsSpec : NSObject

@property (readonly, nonatomic) CGFloat baselineDistance; // ivar: _baselineDistance
@property (readonly, nonatomic) NSDictionary *fallbackTitleTextAttributes; // ivar: _fallbackTitleTextAttributes
@property (readonly, nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (readonly, nonatomic) NSDictionary *subtitleTextAttributes; // ivar: _subtitleTextAttributes
@property (readonly, nonatomic) NSDictionary *titleTextAttributes; // ivar: _titleTextAttributes


+(CGFloat)_playButtonPaddingForFontSet:(NSInteger)arg0 specSet:(NSInteger)arg1 variant:(NSInteger)arg2 deviceMargin:(CGFloat)arg3 forHeaderTile:(BOOL)arg4 ;
+(CGFloat)baselineDistanceForFontSet:(NSInteger)arg0 specSet:(NSInteger)arg1 variant:(NSInteger)arg2 size:(struct CGSize )arg3 shouldScale:(BOOL)arg4 ;
+(NSInteger)_memoryLabelKindForDescriptor:(struct PXViewSpecDescriptor )arg0 ;
+(NSInteger)capitalizationStyleForLabelKind:(NSInteger)arg0 ;
+(NSInteger)numberOfLinesForLabelKind:(NSInteger)arg0 ;
+(id)_fontSetByTitleFontName;
+(id)_fontSpecCache;
+(id)_titleFontNameByFontSet;
+(id)memoriesFontsSpecForDescriptor:(struct PXViewSpecDescriptor )arg0 extendedTraitCollection:(id)arg1 ;
+(id)supportedTitleFontNames;
+(id)textAttributesForFontName:(id)arg0 fontSize:(CGFloat)arg1 lineHeight:(CGFloat)arg2 tracking:(CGFloat)arg3 stroke:(CGFloat)arg4 shadow:(id)arg5 capitalizationStyle:(NSInteger)arg6 ;
+(id)textAttributesForFontSet:(NSInteger)arg0 specSet:(NSInteger)arg1 labelKind:(NSInteger)arg2 variant:(NSInteger)arg3 size:(struct CGSize )arg4 shouldScale:(BOOL)arg5 ;
+(struct UIEdgeInsets )paddingForFontSet:(NSInteger)arg0 specSet:(NSInteger)arg1 variant:(NSInteger)arg2 layoutMargins:(struct UIEdgeInsets )arg3 width:(CGFloat)arg4 shouldScale:(BOOL)arg5 forHeaderTile:(BOOL)arg6 ;
+(void)_getSpecSet:(*NSInteger)arg0 variant:(*NSInteger)arg1 forDescriptor:(struct PXViewSpecDescriptor )arg2 extendedTraitCollection:(id)arg3 ;
+(void)preloadFontsSpecsForExtendedTraitCollection:(id)arg0 ;
-(id)_initWithIdentifier:(struct PXMemoryFontsSpecIdentifier )arg0 ;


@end


#endif