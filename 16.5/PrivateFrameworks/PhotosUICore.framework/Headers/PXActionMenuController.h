// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXACTIONMENUCONTROLLER_H
#define PXACTIONMENUCONTROLLER_H

@class NSArray, UIAlertController, NSOrderedSet, NSSet;

#import <Foundation/Foundation.h>


@interface PXActionMenuController : NSObject {
    BOOL _actionsNeedsUpdate;
}


@property (readonly, nonatomic) NSArray *actionManagers; // ivar: _actionManagers
@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSArray *activityActions; // ivar: _activityActions
@property (readonly, nonatomic) NSArray *alertActionTypes; // ivar: _alertActionTypes
@property (readonly, nonatomic) NSArray *alertActionViewControllers; // ivar: _alertActionViewControllers
@property (readonly, nonatomic) NSArray *alertActions; // ivar: _alertActions
@property (readonly, nonatomic) UIAlertController *alertController;
@property (readonly, nonatomic) NSArray *availableActionTypes;
@property (copy, nonatomic) NSOrderedSet *defaultActivityTypeOrder; // ivar: _defaultActivityTypeOrder
@property (copy, nonatomic) NSSet *disabledActionTypes; // ivar: _disabledActionTypes
@property (copy, nonatomic) NSSet *excludedActionTypes; // ivar: _excludedActionTypes


-(BOOL)shouldAllowPerformanceOfActionType:(id)arg0 ;
-(id)init;
-(id)initWithActionManagers:(id)arg0 ;
-(void)_updateActionsIfNeeded;
-(void)invalidateActions;


@end


#endif