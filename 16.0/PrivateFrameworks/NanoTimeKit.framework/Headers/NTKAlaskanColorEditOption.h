// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKALASKANCOLOREDITOPTION_H
#define NTKALASKANCOLOREDITOPTION_H



#import "NTKCuratedColorEditOption.h"

@interface NTKAlaskanColorEditOption : NTKCuratedColorEditOption

@property (readonly, nonatomic) NSUInteger color;


+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)curatedColorLocalizationKeyPrefix;
+(id)curatedColorValuesForDevice:(id)arg0 ;
+(id)optionWithColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)localizedName;
-(id)pigmentEditOption;


@end


#endif