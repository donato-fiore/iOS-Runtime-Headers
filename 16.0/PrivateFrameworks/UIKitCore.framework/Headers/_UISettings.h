// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISETTINGS_H
#define _UISETTINGS_H

@class PTSettings;



@interface _UISettings : PTSettings



+(BOOL)_supportsArchivingCustomClass:(Class)arg0 ;
+(BOOL)_supportsArchivingStructType:(id)arg0 ;
+(id)_archiveDictionaryForObject:(id)arg0 ofCustomClass:(Class)arg1 ;
+(id)_archiveDictionaryForValue:(id)arg0 ofStructType:(id)arg1 ;
+(id)_colorFromDictionary:(id)arg0 ;
+(id)_dictionaryForColor:(id)arg0 ;
+(id)_dictionaryForFont:(id)arg0 ;
+(id)_fontFromDictionary:(id)arg0 ;
+(id)_objectOfCustomClass:(Class)arg0 fromArchiveDictionary:(id)arg1 ;
+(id)_valueOfStructType:(id)arg0 fromArchiveDictionary:(id)arg1 ;
+(id)settingsFromArchiveFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)archiveToFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)restoreFromArchiveFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithDefaultValues;
-(void)setValuesFromModel:(id)arg0 ;


@end


#endif