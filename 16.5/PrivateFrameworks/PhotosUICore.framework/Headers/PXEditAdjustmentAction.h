// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEDITADJUSTMENTACTION_H
#define PXEDITADJUSTMENTACTION_H

@class NUComposition, NSString, NSNumber;


#import "PXEditCompositionAction.h"

@interface PXEditAdjustmentAction : PXEditCompositionAction {
    NUComposition *_sourceComposition;
    NUComposition *_targetComposition;
}


@property (readonly, nonatomic) NSString *adjustmentKey; // ivar: _adjustmentKey
@property (readonly, nonatomic) NSNumber *targetValue; // ivar: _targetValue


+(id)muteToggleActionWithCompositionController:(id)arg0 isLoopingVideo:(BOOL)arg1 ;
-(id)init;
-(id)initWithCompositionController:(id)arg0 adjustmentKey:(id)arg1 targetValue:(id)arg2 ;
-(id)sourceComposition;
-(id)targetComposition;
-(void)performAction:(id)arg0 ;


@end


#endif