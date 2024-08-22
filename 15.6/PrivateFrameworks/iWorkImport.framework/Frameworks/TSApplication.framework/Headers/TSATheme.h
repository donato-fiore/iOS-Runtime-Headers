// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSATHEME_H
#define TSATHEME_H

@class TSSTheme, TSWPParagraphStyle;



@interface TSATheme : TSSTheme

@property (readonly, nonatomic) TSWPParagraphStyle *captionTextPreset;
@property (readonly, nonatomic) TSWPParagraphStyle *titleTextPreset;


+(id)localizedNameForPresetKind:(id)arg0 ;
+(id)localizedNameForStylePickerTitle:(id)arg0 ;
+(id)localizedTitleForApplyStyleMenuItem:(id)arg0 ;
+(id)localizedTitleForCreateStyleMenuItem:(id)arg0 ;
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg0 inTheme:(id)arg1 alternate:(NSUInteger)arg2 ;
+(void)registerPresetSourceClasses;
-(void)addCaptionTextStylePresets;
-(void)addCaptionTextStylePresetsForPowerPointImport;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif