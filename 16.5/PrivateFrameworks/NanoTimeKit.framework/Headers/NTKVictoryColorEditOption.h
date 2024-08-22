// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKVICTORYCOLOREDITOPTION_H
#define NTKVICTORYCOLOREDITOPTION_H

@class NSString;
@protocol NTKPigmentEditOptionConvertible;


#import "NTKEnumeratedEditOption.h"

@interface NTKVictoryColorEditOption : NTKEnumeratedEditOption <NTKPigmentEditOptionConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger victoryColor;


+(NSUInteger)colorCodeForPigmentEditOption:(id)arg0 forDevice:(id)arg1 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg0 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)colorNameForColorValue:(NSUInteger)arg0 ;
+(id)fall2020VictoryColors;
+(id)gloryEVictoryColors;
+(id)gloryVictoryColors;
+(id)graceVictoryColors;
+(id)optionWithVictoryColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)pigmentFaceDomain;
+(id)spring2020VictoryColors;
-(BOOL)optionExistsInDevice:(id)arg0 ;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;
-(id)localizedName;
-(id)pigmentCollectionName;
-(id)pigmentEditOption;


@end


#endif