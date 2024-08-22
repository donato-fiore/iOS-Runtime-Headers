// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FICELEBRATIONASSETURLPROVIDER_H
#define FICELEBRATIONASSETURLPROVIDER_H


#import <Foundation/Foundation.h>


@interface FICelebrationAssetURLProvider : NSObject



+(NSUInteger)_variantCountForGoalType:(NSInteger)arg0 ;
+(id)_celebrationMovieSubdirectory;
+(id)_movieNameForAchievementIdentifier:(id)arg0 variantNumber:(NSUInteger)arg1 ;
+(id)_movieNameForGoalType:(NSInteger)arg0 variantNumber:(NSUInteger)arg1 ;
+(id)celebrationMovieURLForAchievementIdentifer:(id)arg0 ;
+(id)celebrationMovieURLForGoalType:(NSInteger)arg0 ;


@end


#endif