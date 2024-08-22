// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEDITAPPLIEDCINEMATICSTATEACTION_H
#define PXEDITAPPLIEDCINEMATICSTATEACTION_H

@class NSDictionary;


#import "PXAction.h"
#import "PXCinematicEditController.h"

@interface PXEditAppliedCinematicStateAction : PXAction {
    PXCinematicEditController *_cinematicController;
    NSDictionary *_sourceCinematographyState;
    NSDictionary *_targetCinematographyState;
    id *_changeBlock;
}




-(id)actionNameLocalizationKey;
-(id)initWithCinematicController:(id)arg0 changeBlock:(id)arg1 ;
-(void)executeWithUndoManager:(id)arg0 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif