// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDHIGHLIGHTABLEFACECONTAINERVIEW_H
#define NTKGREENFIELDHIGHLIGHTABLEFACECONTAINERVIEW_H

@class UIView, NSMutableDictionary, NSMutableSet;


#import "NTKFace.h"
#import "NTKFaceViewController.h"

@interface NTKGreenfieldHighlightableFaceContainerView : UIView {
    NTKFace *_originalFace;
    NTKFaceViewController *_faceViewController;
    UIView *_overlayView;
    UIView *_highlightedDisplaysContainerView;
    NSMutableDictionary *_highlightedSlotToDisplayWrapperViewMapping;
    NSMutableSet *_highlightedSlots;
    NSMutableDictionary *_slotToTemplateMapping;
}




+(id)_createFaceForDisplayingFrom:(id)arg0 ;
-(id)initWithFace:(id)arg0 ;
-(void)_toggleHighlight:(BOOL)arg0 forComplicationWrapperViewAtSlot:(id)arg1 ;
-(void)_updateTemplateForSlot:(id)arg0 ;
-(void)layoutSubviews;
-(void)setComplicationDisplayViewState:(NSInteger)arg0 forSlot:(id)arg1 ;
-(void)setTemplate:(id)arg0 forSlot:(id)arg1 ;


@end


#endif