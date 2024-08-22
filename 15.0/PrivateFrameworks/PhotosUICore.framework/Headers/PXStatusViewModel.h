// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTATUSVIEWMODEL_H
#define PXSTATUSVIEWMODEL_H

@class NSString;


#import "PXObservable.h"

@interface PXStatusViewModel : PXObservable

@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *actionConfirmationAlertButtonTitle; // ivar: _actionConfirmationAlertButtonTitle
@property (readonly, copy, nonatomic) NSString *actionConfirmationAlertSubtitle; // ivar: _actionConfirmationAlertSubtitle
@property (readonly, copy, nonatomic) NSString *actionConfirmationAlertTitle; // ivar: _actionConfirmationAlertTitle
@property (readonly, copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)description;
-(void)performChanges:(id)arg0 ;


@end


#endif