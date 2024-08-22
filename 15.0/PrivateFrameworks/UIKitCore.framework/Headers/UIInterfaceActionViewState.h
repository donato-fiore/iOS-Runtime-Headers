// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERFACEACTIONVIEWSTATE_H
#define UIINTERFACEACTIONVIEWSTATE_H

@protocol NSCopying;


#import "UIInterfaceActionVisualStyleViewState.h"
#import "UIInterfaceAction.h"

@interface UIInterfaceActionViewState : UIInterfaceActionVisualStyleViewState <NSCopying>



@property (readonly, nonatomic) UIInterfaceAction *action; // ivar: _action
@property (readonly, nonatomic) id *actionViewStateContext; // ivar: _actionViewStateContext
@property (readonly, nonatomic) BOOL isFocused; // ivar: _isFocused
@property (readonly, nonatomic) BOOL isHighlighted; // ivar: _isHighlighted
@property (readonly, nonatomic) BOOL isPreferred; // ivar: _isPreferred
@property (readonly, nonatomic) BOOL isPressed; // ivar: _isPressed
@property (readonly, nonatomic) NSUInteger visualCornerPosition; // ivar: _visualCornerPosition


+(id)_nullViewStateForActionType:(NSInteger)arg0 ;
+(id)viewStateForActionRepresentationView:(id)arg0 action:(id)arg1 ;
+(id)viewStateForActionRepresentationViewDescendantView:(id)arg0 action:(id)arg1 ;
+(id)viewStateForAlertControllerActionView:(id)arg0 ;
+(id)viewStateRepresentingDefaultAction;
+(id)viewStateRepresentingPreferredAction;
-(BOOL)_stateEqualToActionViewState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPropertiesFromActionRepresentationView:(id)arg0 groupView:(id)arg1 action:(id)arg2 ;
-(void)_collectStateForDefaultState;
-(void)_collectStateFromAction:(id)arg0 ;
-(void)_collectStateFromActionRepresentationView:(id)arg0 ;
-(void)_collectStateFromActionViewState:(id)arg0 ;


@end


#endif