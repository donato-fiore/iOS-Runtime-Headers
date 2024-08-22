// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWLAYOUTFEEDBACKLOOPDEBUGGER_H
#define _UIVIEWLAYOUTFEEDBACKLOOPDEBUGGER_H

@class NSMutableSet, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIViewLayoutFeedbackLoopDebugger : NSObject {
    NSInteger _debuggingState;
    UIView *_rootView;
    NSMutableSet *_viewsWithChangingGeometry;
    NSMutableSet *_viewsWithVariableChangesTriggeringLayout;
    NSMutableSet *_turningPointViews;
    NSMutableSet *_involvedViews;
    NSMutableArray *_layoutList;
    NSArray *_reducedLayoutList;
    BOOL _rootViewConfirmed;
    BOOL _feedbackLoopConfirmed;
    NSInteger _rootViewLayoutCount;
}


@property (retain, nonatomic) UIView *currentLayoutView; // ivar: _currentLayoutView


+(id)layoutFeedbackLoopDebugger;
+(void)createLayoutFeedbackLoopDebuggerForUnitTests;
+(void)destroyLayoutFeedbackLoopDebuggerForUnitTests;
-(id)description;
-(id)topLevelViewHierarchyTrace;
-(id)turningPointViewsCreateIfNecessary;
-(id)viewsWithChangingGeometryCreateIfNecessary;
-(id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;
-(void)_recordSetNeedsLayoutToLayerOfView:(id)arg0 ;
-(void)didEnterLayoutSublayersOfLayerForView:(id)arg0 ;
-(void)didSendLayoutSubviewsToView:(id)arg0 ;
-(void)didSendSetNeedsLayoutToLayerOfView:(id)arg0 ;
-(void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg0 ;
-(void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg0 ;
-(void)didUpdateLayoutMargins:(struct UIEdgeInsets )arg0 ofView:(id)arg1 ;
-(void)didUpdateSafeAreaInsets:(struct UIEdgeInsets )arg0 ofView:(id)arg1 ;
-(void)dumpInfoWithInfoCollectionSuccess:(BOOL)arg0 ;
-(void)willChangeGeometryForLayerOfView:(id)arg0 ;
-(void)willExitLayoutSublayersOfLayerForView:(id)arg0 ;
-(void)willSendLayoutSubviewsToView:(id)arg0 ;
-(void)willSendSetBounds:(struct CGRect )arg0 toLayerOfView:(id)arg1 ;
-(void)willSendSetFrame:(struct CGRect )arg0 toLayerOfView:(id)arg1 ;
-(void)willSendSetNeedsLayoutToLayerOfView:(id)arg0 ;
-(void)willSendSetNeedsLayoutToView:(id)arg0 becauseOfChangeInVariable:(id)arg1 inLayoutEngine:(id)arg2 ;
-(void)willSendSetPosition:(struct CGPoint )arg0 toLayerOfView:(id)arg1 ;
-(void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg0 ;
-(void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg0 ;


@end


#endif