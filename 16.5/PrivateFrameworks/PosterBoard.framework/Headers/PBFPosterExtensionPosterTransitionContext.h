// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTEREXTENSIONPOSTERTRANSITIONCONTEXT_H
#define PBFPOSTEREXTENSIONPOSTERTRANSITIONCONTEXT_H

@class NSArray, PRPosterConfiguration, NSMapTable;

#import <Foundation/Foundation.h>


@interface PBFPosterExtensionPosterTransitionContext : NSObject

@property (readonly, nonatomic) NSArray *addedPosters; // ivar: _addedPosters
@property (readonly, nonatomic) PRPosterConfiguration *beginActivePosterConfiguration; // ivar: _beginActivePosterConfiguration
@property (readonly, nonatomic) PRPosterConfiguration *beginSelectedPosterConfiguration; // ivar: _beginSelectedPosterConfiguration
@property (readonly, nonatomic) NSArray *deletedPosters; // ivar: _deletedPosters
@property (readonly, nonatomic) PRPosterConfiguration *endActivePosterConfiguration; // ivar: _endActivePosterConfiguration
@property (readonly, nonatomic) PRPosterConfiguration *endSelectedPosterConfiguration; // ivar: _endSelectedPosterConfiguration
@property (readonly, nonatomic) NSMapTable *homeScreenPosterIdentityForSwitcherConfiguration; // ivar: _homeScreenPosterIdentityForSwitcherConfiguration
@property (readonly, nonatomic) BOOL transitioningToNewActive;
@property (readonly, nonatomic) BOOL transitioningToNewSelection;
@property (readonly, nonatomic) NSArray *updatedPosters; // ivar: _updatedPosters


+(id)contextWithBeginSelectedPoster:(id)arg0 endSelectedPoster:(id)arg1 beginActivePoster:(id)arg2 endActivePoster:(id)arg3 deletedPosters:(id)arg4 addedPosters:(id)arg5 updatedPosters:(id)arg6 homeScreenPosterIdentityForSwitcherConfiguration:(id)arg7 ;
-(id)initWithBeginSelectedPoster:(id)arg0 endSelectedPoster:(id)arg1 beginActivePoster:(id)arg2 endActivePoster:(id)arg3 deletedPosters:(id)arg4 addedPosters:(id)arg5 updatedPosters:(id)arg6 homeScreenPosterIdentityForSwitcherConfiguration:(id)arg7 ;


@end


#endif