// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCONTENTPROPERTYLIST_H
#define GKCONTENTPROPERTYLIST_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface GKContentPropertyList : NSObject {
    NSDictionary *_achievementsByIdentifier;
    NSDictionary *_leaderboardsByIdentifier;
    NSDictionary *_leaderboardSetsByIdentifier;
}


@property (retain) NSString *bundleID; // ivar: _bundleID
@property (retain) NSDictionary *root; // ivar: _root


+(id)localPropertyListForGameDescriptor:(id)arg0 ;
-(id)_mainBundle;
-(id)achievementDescriptionForIdentifier:(id)arg0 ;
-(id)achievementDescriptions;
-(id)imageNameForDashboardLogo;
-(id)leaderboardDescriptionForIdentifier:(id)arg0 ;
-(id)leaderboardDescriptions;
-(id)leaderboardSetDescriptionForIdentifier:(id)arg0 ;
-(id)leaderboardSetDescriptions;
-(id)localizedStringForKey:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 forLocalization:(id)arg1 ;


@end


#endif