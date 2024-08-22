// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7SWIFTUI26NAVIGATIONSPLITCOORDINATOR_H
#define _TTC7SWIFTUI26NAVIGATIONSPLITCOORDINATOR_H

@protocol UISplitViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUI26NavigationSplitCoordinator : NSObject <UISplitViewControllerDelegate>

 {
    ? sidebar;
    ? content;
    ? detail;
    ? parameters;
    ? columnVisibility;
    ? navigationAuthority;
    ? previousBridgedState;
    ? expandedStackCoordinators;
    ? compactCoordinator;
    ? wasCollapsed;
    ? endUserTriggeredUpdates;
    ? isProcessingProgrammaticVisibilityUpdate;
    ? isCollapsing;
    ? lastStateSeed;
}




-(NSInteger)splitViewController:(id)arg0 displayModeForExpandingToProposedDisplayMode:(NSInteger)arg1 ;
-(NSInteger)splitViewController:(id)arg0 topColumnForCollapsingToProposedTopColumn:(NSInteger)arg1 ;
-(id)init;
-(void)splitViewController:(id)arg0 willHideColumn:(NSInteger)arg1 ;
-(void)splitViewController:(id)arg0 willShowColumn:(NSInteger)arg1 ;
-(void)splitViewControllerDidCollapse:(id)arg0 ;


@end


#endif