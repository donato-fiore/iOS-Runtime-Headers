// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXEDITCOMPOSITIONACTION_H
#define PXEDITCOMPOSITIONACTION_H

@class NSString, PICompositionController, NUComposition;


#import "PXAction.h"

@interface PXEditCompositionAction : PXAction

@property (copy, nonatomic) NSString *actionNameLocalizationKey; // ivar: _actionNameLocalizationKey
@property (readonly, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (copy, nonatomic) NSString *localizedActionName; // ivar: _localizedActionName
@property (readonly, nonatomic) NUComposition *sourceComposition;
@property (readonly, nonatomic) NUComposition *targetComposition;


-(id)init;
-(id)initWithCompositionController:(id)arg0 ;
-(void)_applyComposition:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif