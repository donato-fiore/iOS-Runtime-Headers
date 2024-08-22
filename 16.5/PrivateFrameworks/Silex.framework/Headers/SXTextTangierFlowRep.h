// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTTANGIERFLOWREP_H
#define SXTEXTTANGIERFLOWREP_H

@class TSWPRep, NSString;
@protocol SXAXCustomRotorItemProvider, SXTextTangierRepAccessibilityElement, SXTextTangierRepAccessibilityDataSource;


#import "SXAXCustomRotor.h"
#import "SXTextTangierInteractiveCanvasController.h"

@interface SXTextTangierFlowRep : TSWPRep <SXAXCustomRotorItemProvider, SXTextTangierRepAccessibilityElement>



@property (weak, nonatomic) NSObject<SXTextTangierRepAccessibilityDataSource> *accessibilityDataSource; // ivar: accessibilityDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frameInCanvas; // ivar: _frameInCanvas
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SXAXCustomRotor *headingsRotor; // ivar: _headingsRotor
@property (weak, nonatomic) SXTextTangierInteractiveCanvasController *icc; // ivar: _icc
@property (retain, nonatomic) SXAXCustomRotor *linkRotor; // ivar: _linkRotor
@property (readonly) Class superclass;


-(BOOL)accessibilitySupportsTextSelection;
-(BOOL)forceTiling;
-(BOOL)isAccessibilityElement;
-(BOOL)p_doesRep:(id)arg0 containCharIndex:(NSUInteger)arg1 isStart:(BOOL)arg2 ;
-(BOOL)preventClipToColumn;
-(BOOL)updateFromVisualPosition;
-(Class)wpEditorClass;
-(NSUInteger)accessibilityTraits;
-(NSUInteger)charIndexForPointWithPinning:(struct CGPoint )arg0 isTail:(BOOL)arg1 selectionType:(int)arg2 ;
-(id)_accessibilityUserTestingChildren;
-(id)accessibilityElements;
-(id)accessibilityHitTest:(struct CGPoint )arg0 ;
-(id)accessibilityNextTextNavigationElement;
-(id)accessibilityPreviousTextNavigationElement;
-(id)hitRep:(struct CGPoint )arg0 withGesture:(id)arg1 passingTest:(id)arg2 ;
-(id)interactiveCanvasController;
-(id)itemsForCustomRotor:(id)arg0 ;
-(id)orderedSiblings;
-(id)repForCharIndex:(NSUInteger)arg0 isStart:(BOOL)arg1 ;
-(id)siblings;
-(id)storage;
-(id)supportedCustomRotors;
-(id)sxaxLinkElements;
-(id)sxaxNameForEditRotorAction:(id)arg0 ;
-(id)sxaxSupportedEditRotorActions;
-(struct CGRect )accessibilityFrameForScrolling;
-(struct _NSRange )_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(struct _NSRange )arg0 ;
-(void)dealloc;


@end


#endif