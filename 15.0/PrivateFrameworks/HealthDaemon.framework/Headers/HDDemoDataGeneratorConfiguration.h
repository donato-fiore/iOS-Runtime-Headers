// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEMODATAGENERATORCONFIGURATION_H
#define HDDEMODATAGENERATORCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface HDDemoDataGeneratorConfiguration : NSObject

@property (nonatomic) NSInteger biologicalSex; // ivar: _biologicalSex
@property (nonatomic) NSInteger generationPeriodInDays; // ivar: _generationPeriodInDays
@property (nonatomic) BOOL highFidelityGeneration; // ivar: _highFidelityGeneration
@property (nonatomic) NSInteger nutritionTrackingType; // ivar: _nutritionTrackingType
@property (nonatomic) NSInteger profileType; // ivar: _profileType
@property (nonatomic) NSInteger resultsTrackingType; // ivar: _resultsTrackingType
@property (nonatomic) NSInteger sampleTrackingType; // ivar: _sampleTrackingType
@property (nonatomic) BOOL shouldEnsureRecentWorkoutHasRoute; // ivar: _shouldEnsureRecentWorkoutHasRoute
@property (nonatomic) BOOL shouldGenerateHealthDocuments; // ivar: _shouldGenerateHealthDocuments
@property (nonatomic) BOOL shouldGenerateLoudHeadphoneData; // ivar: _shouldGenerateLoudHeadphoneData
@property (nonatomic) BOOL shouldGenerateMedicalID; // ivar: _shouldGenerateMedicalID
@property (nonatomic) BOOL shouldGenerateRecentLiquidsIntake; // ivar: _shouldGenerateRecentLiquidsIntake
@property (nonatomic) BOOL shouldPresentNotifications; // ivar: _shouldPresentNotifications


+(id)configurationFromDefaults:(id)arg0 ;
-(id)init;
-(void)configureForProfileType:(NSInteger)arg0 ;
-(void)persistToDefaults:(id)arg0 ;


@end


#endif