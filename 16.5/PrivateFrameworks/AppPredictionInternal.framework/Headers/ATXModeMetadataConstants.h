// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEMETADATACONSTANTS_H
#define ATXMODEMETADATACONSTANTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXModeMetadataConstants : NSObject {
    NSDictionary *_appCategoryScores_V1;
    NSDictionary *_appCategoryScores_V2;
    NSDictionary *_parameters;
    NSDictionary *_defaultAppGenreModeAffinities;
    NSDictionary *_defaultAppGenreModeAffinities_v2;
}




+(id)sharedInstance;
-(id)_invertDictionary:(id)arg0 ;
-(id)defaultAppGenreModeAffinities;
-(id)defaultAppGenreModeAffinities_v2;
-(id)getCategoryScoresV1;
-(id)getCategoryScoresV2;
-(id)init;
-(void)_populateDefaultAppGenreModeAffinities;
-(void)_populateDefaultAppGenreModeAffinities_v2;


@end


#endif