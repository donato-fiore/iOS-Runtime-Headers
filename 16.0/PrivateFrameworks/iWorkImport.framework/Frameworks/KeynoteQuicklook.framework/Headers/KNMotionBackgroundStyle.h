// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNMOTIONBACKGROUNDSTYLE_H
#define KNMOTIONBACKGROUNDSTYLE_H

@class TSSStyle, NSString, TSPData, TSUColor;
@protocol TSSPreset;



@interface KNMotionBackgroundStyle : TSSStyle <TSSPreset>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TSPData *posterFrameData; // ivar: _posterFrameData
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) TSUColor *referenceColor;
@property (readonly) Class superclass;


+(id)axDescriptionForStyleIdentifier:(id)arg0 ;
+(id)backgroundNameForStyleIdentifier:(id)arg0 ;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)nextUnusedStyleIdentifierInStylesheet:(id)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)toolTipForStyle:(id)arg0 ;
-(NSUInteger)minimumReadVersion;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)makeAlternateFill;
-(id)targetParentForStyleMappingByStyleMapper:(id)arg0 intoStylesheet:(id)arg1 ;
-(void)copyAuxiliaryInformationToMigratedStyle:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadMotionBackgroundStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)notifyClientsOfUpdate;
-(void)saveMotionBackgroundStylePropertyMap:(id)arg0 toArchive:(*void)arg1 archiver:(id)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setOverridePropertyMap:(id)arg0 ;


@end


#endif