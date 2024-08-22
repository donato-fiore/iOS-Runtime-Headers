// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLOADINGVIEWCONTROLLER_H
#define GKLOADINGVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, NSString, NSArray;
@protocol _GKStateMachineDelegate;


#import "GKLoadableContentStateMachine.h"

@interface GKLoadingViewController : UIViewController <_GKStateMachineDelegate>



@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat loadingIndicatorDelay; // ivar: _loadingIndicatorDelay
@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine; // ivar: _loadingMachine
@property (retain, nonatomic) NSString *loadingState;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewsToHideWhileLoading; // ivar: _viewsToHideWhileLoading


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didEnterLoadedState;
-(void)didEnterLoadingState;
-(void)didEnterRefreshingState;
-(void)didExitLoadedState;
-(void)didExitLoadingState;
-(void)didExitRefreshingState;
-(void)setViewsToHideHidden:(BOOL)arg0 ;
-(void)showLoadingIndicator;


@end


#endif