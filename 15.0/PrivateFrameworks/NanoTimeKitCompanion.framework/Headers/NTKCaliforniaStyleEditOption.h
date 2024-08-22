// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCALIFORNIASTYLEEDITOPTION_H
#define NTKCALIFORNIASTYLEEDITOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKCaliforniaStyleEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger style;


+(BOOL)_valueIsValid:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(NSUInteger)resolvedAutomaticStyleForCurrentLocale;
+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithStyle:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;


@end


#endif