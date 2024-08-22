// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACLABELEDELEMENTSOVERLAYMANAGER_H
#define CACLABELEDELEMENTSOVERLAYMANAGER_H

@class NSArray;
@protocol CACLabeledElementsOverlayManagerDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACLabeledElementsOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) NSObject<CACLabeledElementsOverlayManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *labeledElements; // ivar: _labeledElements


+(void)assignNumbersToLabeledElements:(id)arg0 numberingStrategy:(int)arg1 ;
-(BOOL)isOverlay;
-(id)_findLabeledElementsThatIntersectsLabelRect:(struct CGRect )arg0 fromLabeledElement:(id)arg1 justLabelRect:(BOOL)arg2 additionalElements:(id)arg3 ;
-(id)_optimizeLabeledElements:(id)arg0 startingNumberedLabelsAtIndex:(NSUInteger)arg1 forceNoArrow:(BOOL)arg2 ;
-(void)addLabeledElements:(id)arg0 forceNoArrow:(BOOL)arg1 ;
-(void)clearLabeledElements;
-(void)hideAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)showLabeledElementsOverlayWithLabeledElements:(id)arg0 ;
-(void)showLabeledElementsOverlayWithLabeledElements:(id)arg0 forceNoArrow:(BOOL)arg1 ;
-(void)startDelayedDimmingOfNumbers;
-(void)stopDelayedDimmingOfNumbers;


@end


#endif