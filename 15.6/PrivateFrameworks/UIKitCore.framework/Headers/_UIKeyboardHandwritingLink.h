// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDHANDWRITINGLINK_H
#define _UIKEYBOARDHANDWRITINGLINK_H

@class TIKeyboardCandidateResultSet, NSString;
@protocol UIKeyboardCandidateListConsumer, UIKeyboardCandidateListDelegate;


#import "UIResponder.h"

@interface _UIKeyboardHandwritingLink : UIResponder <UIKeyboardCandidateListConsumer>

 {
    UIResponder *_previousResponder;
    UIResponder *_fallbackResponder;
    id<UIKeyboardCandidateListDelegate> *_candidateListDelegate;
    NSInteger _selectedIndex;
    BOOL _justDeleted;
}


@property (retain, nonatomic) TIKeyboardCandidateResultSet *candidateSet; // ivar: _candidateSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)hasCandidates;
-(BOOL)isDeleteCandidate:(id)arg0 ;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(BOOL)resignFirstResponder;
-(BOOL)shouldRestoreResponder;
-(BOOL)showCandidate:(id)arg0 ;
-(NSUInteger)currentIndex;
-(NSUInteger)selectedSortIndex;
-(id)currentCandidate;
-(id)init;
-(id)keyboardBehaviors;
-(id)nextResponder;
-(id)statisticsIdentifier;
-(void)candidateAcceptedAtIndex:(NSUInteger)arg0 ;
-(void)candidateOutput:(id)arg0 ;
-(void)candidatesUpdated;
-(void)dealloc;
-(void)performOutput:(id)arg0 ;
-(void)reloadInputViews;
-(void)sendStrokes:(id)arg0 ;
-(void)setCandidates:(id)arg0 inlineText:(id)arg1 inlineRect:(struct CGRect )arg2 maxX:(CGFloat)arg3 layout:(BOOL)arg4 ;
-(void)setUIKeyboardCandidateListDelegate:(id)arg0 ;
-(void)showCandidateAtIndex:(NSUInteger)arg0 ;
-(void)showCandidateInForwardDirection:(BOOL)arg0 granularity:(int)arg1 ;


@end


#endif