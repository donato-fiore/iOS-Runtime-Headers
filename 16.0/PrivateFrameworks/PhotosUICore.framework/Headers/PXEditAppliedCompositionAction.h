// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEDITAPPLIEDCOMPOSITIONACTION_H
#define PXEDITAPPLIEDCOMPOSITIONACTION_H

@class NUComposition;


#import "PXEditCompositionAction.h"

@interface PXEditAppliedCompositionAction : PXEditCompositionAction {
    NUComposition *_targetComposition;
}


@property (readonly, nonatomic) NUComposition *sourceComposition; // ivar: _sourceComposition


-(id)initWithCompositionController:(id)arg0 ;
-(id)initWithCompositionController:(id)arg0 sourceComposition:(id)arg1 ;
-(id)targetComposition;
-(void)performAction:(id)arg0 ;


@end


#endif