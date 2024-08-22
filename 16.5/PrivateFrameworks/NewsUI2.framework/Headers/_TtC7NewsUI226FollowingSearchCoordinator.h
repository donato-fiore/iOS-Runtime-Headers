// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI226FOLLOWINGSEARCHCOORDINATOR_H
#define _TTC7NEWSUI226FOLLOWINGSEARCHCOORDINATOR_H

@class SwiftObject;
@protocol TSTabBarSplitViewAutoObserver;



@interface _TtC7NewsUI226FollowingSearchCoordinator : SwiftObject <TSTabBarSplitViewAutoObserver>

 {
    ? searchHomeContainerController;
    ? searchHomeTransitionController;
    ? searchResultsContainerController;
    ? searchController;
    ? followingViewController;
}




-(void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(BOOL)arg0 ;


@end


#endif