// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEDITAUTOCINEMATICACTION_H
#define PXEDITAUTOCINEMATICACTION_H

@class NSString;


#import "PXAction.h"
#import "PXCinematicEditController.h"

@interface PXEditAutoCinematicAction : PXAction {
    PXCinematicEditController *_cinematicController;
    BOOL _isInAutoFocusState;
}


@property (copy, nonatomic) NSString *localizedActionName; // ivar: _localizedActionName


-(id)initWithCinematicController:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif