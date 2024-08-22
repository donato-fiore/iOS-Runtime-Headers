// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKBLACKCOMBDIALCOLOREDITOPTION_H
#define NTKBLACKCOMBDIALCOLOREDITOPTION_H



#import "NTKEnumeratedEditOption.h"

@interface NTKBlackcombDialColorEditOption : NTKEnumeratedEditOption

@property (readonly, nonatomic) NSUInteger blackcombDialColor;


+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithBlackcombDialColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;


@end


#endif