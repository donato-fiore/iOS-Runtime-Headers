// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDISPLAYITEMDEPENDENCYRELATION_H
#define _UISTATUSBARDISPLAYITEMDEPENDENCYRELATION_H

@class UIStatusBarDisplayItemRelation;


#import "_UIStatusBarDisplayItemState.h"
#import "_UIStatusBarDisplayItemPlacement.h"

@interface _UIStatusBarDisplayItemDependencyRelation : UIStatusBarDisplayItemRelation

@property (weak, nonatomic) _UIStatusBarDisplayItemState *itemState; // ivar: _itemState
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // ivar: _placement
@property (nonatomic) BOOL requirement; // ivar: _requirement


-(BOOL)isFulfilled;
-(id)_ui_descriptionBuilder;
-(id)type;


@end


#endif