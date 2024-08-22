// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7MUSICUI30JSUSERSOCIALPROFILECOORDINATOR_H
#define _TTC7MUSICUI30JSUSERSOCIALPROFILECOORDINATOR_H

@class JSValue;
@protocol _TtP7MusicUIP33_7FE1355BF44CECB8BC6467E452F3DC1237JSUserSocialProfileCoordinatorExports_;

#import <Foundation/Foundation.h>


@interface _TtC7MusicUI30JSUserSocialProfileCoordinator : NSObject <_TtP7MusicUIP33_7FE1355BF44CECB8BC6467E452F3DC1237JSUserSocialProfileCoordinatorExports_>

 {
    ? userSocialProfileCoordinator;
    ? objectGraph;
    ? pendingProfileFetch;
    ? pendingProfileFetchResolution;
}


@property (nonatomic, readonly) JSValue *userProfile;


-(id)fetchUserSocialProfile;
-(id)init;


@end


#endif