// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTOCENTRYSTYLE_H
#define TSWPTOCENTRYSTYLE_H



#import "TSWPParagraphStyle.h"

@interface TSWPTOCEntryStyle : TSWPParagraphStyle



+(id)defaultValueForProperty:(int)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(int)defaultIntValueForProperty:(int)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 basedOnParagraphStyle:(id)arg2 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)parentStyleForFixingOrphanVariation;
-(id)presetKind;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_loadTOCEntryParagraphStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)p_saveTOCEntryStylePropertiesToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif