// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKENUMERATEDEDITOPTION_H
#define NTKENUMERATEDEDITOPTION_H



#import "NTKValueEditOption.h"

@interface NTKEnumeratedEditOption : NTKValueEditOption

@property (readonly, nonatomic) NSUInteger _value;


+(BOOL)_valueIsValid:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(NSUInteger)indexOfOption:(id)arg0 forDevice:(id)arg1 ;
+(NSUInteger)numberOfOptionsForDevice:(id)arg0 ;
+(id)_orderedValuesForDevice:(id)arg0 ;
+(id)_orderedValuesRestrictedByDevice:(id)arg0 ;
+(id)domain;
+(id)legacyOptionWithName:(id)arg0 forDevice:(id)arg1 ;
+(id)legacyOptionWithPigmentEditOption:(id)arg0 forDevice:(id)arg1 ;
+(id)optionAtIndex:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionsRestrictedByDevice:(id)arg0 ;


@end


#endif