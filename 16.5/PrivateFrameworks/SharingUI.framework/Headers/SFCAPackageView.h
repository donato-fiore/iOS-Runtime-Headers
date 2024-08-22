// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCAPACKAGEVIEW_H
#define SFCAPACKAGEVIEW_H

@class UIView, NSMutableArray, CALayer, CAStateController, NSString;
@protocol CAStateControllerDelegate;



@interface SFCAPackageView : UIView <CAStateControllerDelegate>



@property (readonly) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (readonly) float duration; // ivar: _duration
@property (readonly, getter=isInitialState) BOOL initialState;
@property (readonly) CALayer *packageRootLayer;
@property (retain) CAStateController *stateController; // ivar: _stateController
@property (readonly, copy) NSString *stateName;


+(id)keyPathsForValuesAffectingPackageRootLayer;
-(NSUInteger)statesCount;
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