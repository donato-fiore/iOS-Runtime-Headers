// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLOCALIZEDACHIEVEMENTDESCRIPTION_H
#define GKLOCALIZEDACHIEVEMENTDESCRIPTION_H

@class NSString;


#import "GKAchievementDescription.h"
#import "GKGame.h"

@interface GKLocalizedAchievementDescription : GKAchievementDescription

@property (retain) GKGame *game; // ivar: _game
@property (copy) NSString *iconImageName; // ivar: _iconImageName


-(id)_localizedStringFromKey:(id)arg0 ;
-(id)achievedDescription;
-(id)imageNameForIcon;
-(id)title;
-(id)unachievedDescription;


@end


#endif