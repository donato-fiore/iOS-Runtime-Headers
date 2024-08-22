// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUICELEBRATIONASSETLOADER_H
#define FIUICELEBRATIONASSETLOADER_H


#import <Foundation/Foundation.h>


@interface FIUICelebrationAssetLoader : NSObject



+(NSUInteger)_variantCountForGoalType:(NSInteger)arg0 ;
+(id)_movieNameForAchievementIdentifier:(id)arg0 variantNumber:(NSUInteger)arg1 ;
+(id)_movieNameForGoalType:(NSInteger)arg0 variantNumber:(NSUInteger)arg1 ;
+(id)celebrationMovieURLForAchievementIdentifer:(id)arg0 ;
+(id)celebrationMovieURLForGoalType:(NSInteger)arg0 ;


@end


#endif