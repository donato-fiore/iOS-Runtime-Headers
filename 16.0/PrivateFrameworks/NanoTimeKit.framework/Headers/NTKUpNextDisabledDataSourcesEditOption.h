// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUPNEXTDISABLEDDATASOURCESEDITOPTION_H
#define NTKUPNEXTDISABLEDDATASOURCESEDITOPTION_H

@class NSSet;


#import "NTKEditOption.h"

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers; // ivar: _disabledBundleIdentifiers


+(BOOL)supportsSecureCoding;
+(id)optionWithDisabledDataSourceIdentifiers:(id)arg0 forDevice:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidOption;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)_alphabeticallySortedIdentifiers;
-(id)dailySnapshotKey;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisabledDataSourceIdentifiers:(id)arg0 forDevice:(id)arg1 ;
-(id)initWithJSONObjectRepresentation:(id)arg0 forDevice:(id)arg1 ;
-(id)localizedName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif