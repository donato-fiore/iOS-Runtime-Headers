// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUI26NAVIGATIONSPLITCOORDINATOR_H
#define _TTC7SWIFTUI26NAVIGATIONSPLITCOORDINATOR_H

@protocol UISplitViewControllerDelegate, UISplitViewControllerDelegatePrivate;

#import <Foundation/Foundation.h>


@interface _TtC7SwiftUI26NavigationSplitCoordinator : NSObject <UISplitViewControllerDelegate, UISplitViewControllerDelegatePrivate>

 {
    ? sidebar;
    ? content;
    ? detail;
    ? parameters;
    ? columnVisibility;
    ? navigationAuthority;
    ? splitViewController;
    ? previousBridgedState;
    ? expandedStackCoordinators;
    ? compactCoordinator;
    ? wasCollapsed;
    ? destinationDisplayMode;
    ? trackingCompletionAction;
    ? mode;
    ? lastStateSeed;
}




-(NSInteger)splitViewController:(id)arg0 displayModeForExpandingToProposedDisplayMode:(NSInteger)arg1 ;
-(NSInteger)splitViewController:(id)arg0 topColumnForCollapsingToProposedTopColumn:(NSInteger)arg1 ;
-(id)init;
-(void)_splitViewController:(id)arg0 didChangeFromDisplayMode:(NSInteger)arg1 toDisplayMode:(NSInteger)arg2 ;
-(void)splitViewController:(id)arg0 willChangeToDisplayMode:(NSInteger)arg1 ;
-(void)splitViewController:(id)arg0 willHideColumn:(NSInteger)arg1 ;
-(void)splitViewController:(id)arg0 willShowColumn:(NSInteger)arg1 ;


@end


#endif