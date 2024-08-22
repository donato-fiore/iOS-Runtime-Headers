// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKVALUEEDITOPTION_H
#define NTKVALUEEDITOPTION_H



#import "NTKEditOption.h"

@interface NTKValueEditOption : NTKEditOption {
    NSUInteger _value;
}




+(BOOL)_valueIsValid:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_localizedNameForActionForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_localizedNameForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_nameLocalizationKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_optionWithValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)_snapshotKeyForValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)localizedNameForValidValue:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)optionByValidatingValueOfInvalidOption:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidOption;
-(NSUInteger)_value;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_faceBundleStringToValueDict;
-(id)_valueToFaceBundleStringDict;
-(id)dailySnapshotKey;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 forDevice:(id)arg1 ;
-(id)localizedName;
-(id)localizedNameForAction;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif