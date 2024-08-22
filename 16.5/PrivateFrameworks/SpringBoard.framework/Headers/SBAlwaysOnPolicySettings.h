// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBALWAYSONPOLICYSETTINGS_H
#define SBALWAYSONPOLICYSETTINGS_H

@class PTSettings, NSSet;



@interface SBAlwaysOnPolicySettings : PTSettings

@property (copy, nonatomic) NSSet *alwaysOnDisablingFocusSemanticTypes;
@property (nonatomic) NSInteger focusStrategy; // ivar: _focusStrategy
@property (nonatomic) BOOL semanticTypeCustom; // ivar: _semanticTypeCustom
@property (nonatomic) BOOL semanticTypeDefault; // ivar: _semanticTypeDefault
@property (nonatomic) BOOL semanticTypeDriving; // ivar: _semanticTypeDriving
@property (nonatomic) BOOL semanticTypeExercise; // ivar: _semanticTypeExercise
@property (nonatomic) BOOL semanticTypeGaming; // ivar: _semanticTypeGaming
@property (nonatomic) BOOL semanticTypeMindfulness; // ivar: _semanticTypeMindfulness
@property (nonatomic) BOOL semanticTypePersonal; // ivar: _semanticTypePersonal
@property (nonatomic) BOOL semanticTypeReading; // ivar: _semanticTypeReading
@property (nonatomic) BOOL semanticTypeSleep; // ivar: _semanticTypeSleep
@property (nonatomic) BOOL semanticTypeWork; // ivar: _semanticTypeWork


+(id)_keyPathForSemanticTypeName:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif