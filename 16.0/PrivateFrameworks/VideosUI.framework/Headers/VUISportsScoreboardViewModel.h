// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUISPORTSSCOREBOARDVIEWMODEL_H
#define VUISPORTSSCOREBOARDVIEWMODEL_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface VUISportsScoreboardViewModel : NSObject

@property (readonly, nonatomic) NSString *canonicalId; // ivar: _canonicalId
@property (nonatomic) BOOL configureScoreUpdates; // ivar: _configureScoreUpdates
@property (readonly, nonatomic) NSDictionary *leagueContext; // ivar: _leagueContext
@property (readonly, nonatomic) NSArray *scores; // ivar: _scores
@property (readonly, nonatomic) BOOL showScoreboard; // ivar: _showScoreboard


-(id)initWithDictionary:(id)arg0 ;
-(id)jsContextDictionary;


@end


#endif