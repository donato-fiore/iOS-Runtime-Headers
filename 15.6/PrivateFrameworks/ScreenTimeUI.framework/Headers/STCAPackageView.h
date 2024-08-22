// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCAPACKAGEVIEW_H
#define STCAPACKAGEVIEW_H

@class UIView, NSMutableArray, CALayer, CAStateController, NSString;
@protocol CAStateControllerDelegate;



@interface STCAPackageView : UIView <CAStateControllerDelegate>



@property (readonly) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (readonly, getter=isInitialState) BOOL initialState;
@property (readonly) CALayer *packageRootLayer;
@property (retain) CAStateController *stateController; // ivar: _stateController
@property (readonly, copy) NSString *stateName;


+(id)keyPathsForValuesAffectingPackageRootLayer;
-(id)_getStateWithName:(id)arg0 ;
-(id)_newStateControllerWithSuperlayer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_changeAppearance;
-(void)_stcaPackageViewCommonInit;
-(void)animateToInitialStateWithCompletionHandler:(id)arg0 ;
-(void)animateToStateName:(id)arg0 completionHandler:(id)arg1 ;
-(void)stateController:(id)arg0 transitionDidStop:(id)arg1 completed:(BOOL)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif