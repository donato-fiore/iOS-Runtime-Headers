// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLOADABLECONTENTVIEWCONTROLLER_H
#define GKLOADABLECONTENTVIEWCONTROLLER_H

@class UIActivityIndicatorView, NSString, NSArray;
@protocol _GKStateMachineDelegate;


#import "GKViewController.h"
#import "GKLoadableContentStateMachine.h"

@interface GKLoadableContentViewController : GKViewController <_GKStateMachineDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat loadingIndicatorDelay; // ivar: _loadingIndicatorDelay
@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // ivar: _loadingMachine
@property (retain, nonatomic) NSString *loadingState;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading; // ivar: _viewsToHideWhileLoading


-(id)init;
-(void)didEnterLoadedState;
-(void)didEnterLoadingState;
-(void)didExitLoadedState;
-(void)didExitLoadingState;


@end


#endif