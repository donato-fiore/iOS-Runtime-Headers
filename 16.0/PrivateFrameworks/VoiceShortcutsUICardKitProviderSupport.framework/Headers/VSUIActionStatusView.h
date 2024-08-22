// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUIACTIONSTATUSVIEW_H
#define VSUIACTIONSTATUSVIEW_H

@class UIView, NSString;
@protocol SUICProgressStateMachineObserving, VSUIActionStatusViewDelegate;


#import "_VSUIActionStatusErrorView.h"

@interface VSUIActionStatusView : UIView <SUICProgressStateMachineObserving>



@property (retain, nonatomic) UIView *activityView; // ivar: _activityView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSUIActionStatusViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _VSUIActionStatusErrorView *errorView; // ivar: _errorView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setUpViews;
-(void)_updateAcitivityViewSubviewWithDelegateProvidedView;
-(void)progressStateMachine:(id)arg0 didTransitionToState:(NSUInteger)arg1 fromState:(NSUInteger)arg2 forEvent:(NSUInteger)arg3 ;
-(void)progressStateMachine:(id)arg0 ignoredEvent:(NSUInteger)arg1 ;
-(void)resetState;


@end


#endif