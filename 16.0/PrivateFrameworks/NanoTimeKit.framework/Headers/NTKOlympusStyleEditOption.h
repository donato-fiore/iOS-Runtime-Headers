// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKOLYMPUSSTYLEEDITOPTION_H
#define NTKOLYMPUSSTYLEEDITOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKOlympusStyleEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger style;


+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithStyle:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;


@end


#endif