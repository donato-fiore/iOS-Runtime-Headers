// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCHARACTERCOLOREDITOPTION_H
#define NTKCHARACTERCOLOREDITOPTION_H

@class UIColor, NSString;
@protocol NTKPigmentEditOptionConvertible;


#import "NTKValueEditOption.h"

@interface NTKCharacterColorEditOption : NTKValueEditOption <NTKPigmentEditOptionConvertible>



@property (readonly, nonatomic) NSUInteger color;
@property (readonly, nonatomic) UIColor *colorValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat desaturation;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)indexOfOption:(id)arg0 forCharacter:(NSUInteger)arg1 forDevice:(id)arg2 ;
+(NSUInteger)numberOfOptionsForCharacter:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)legacyOptionWithPigmentEditOption:(id)arg0 forDevice:(id)arg1 ;
+(id)optionAtIndex:(NSUInteger)arg0 forCharacter:(NSUInteger)arg1 forDevice:(id)arg2 ;
+(id)optionByValidatingValueOfInvalidOption:(id)arg0 ;
+(id)optionWithFaceColor:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionWithOption:(id)arg0 forCharacter:(NSUInteger)arg1 forDevice:(id)arg2 ;
-(BOOL)isValidOption;
-(NSInteger)swatchStyle;
-(id)_valueToFaceBundleStringDict;
-(id)localizedName;
-(id)pigmentEditOption;


@end


#endif