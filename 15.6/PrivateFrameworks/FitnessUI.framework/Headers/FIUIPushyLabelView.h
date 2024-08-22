// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIPUSHYLABELVIEW_H
#define FIUIPUSHYLABELVIEW_H

@class UIView, NSArray, NSAttributedString;



@interface FIUIPushyLabelView : UIView {
    NSArray *_currentSnapshotCharacters;
    NSArray *_incomingSnapshotCharacters;
    NSAttributedString *_currentAttributedText;
    id *_pendingAttributedString;
    NSUInteger _pendingDirection;
    BOOL _pendingPushPerCharacter;
    CGFloat _currentAnimationFinishTime;
}




-(id)_snapshotCharactersFromAttributedText:(id)arg0 perCharacter:(BOOL)arg1 ;
-(id)currentAttributedText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutForPushStartWithDirection:(NSUInteger)arg0 ;
-(void)_layoutViewsAtIndex:(NSUInteger)arg0 forPushEndWithDirection:(NSUInteger)arg1 ;
-(void)_processPendingStringIfNeeded;
-(void)_setCurrentSnapshotCharacters:(id)arg0 ;
-(void)_setIncomingSnapshotCharacters:(id)arg0 ;
-(void)_swapCurrentSnapshotCharacters:(id)arg0 forIncomingCharacters:(id)arg1 ;
-(void)pushToAttributedText:(id)arg0 direction:(NSUInteger)arg1 perCharacter:(BOOL)arg2 ;
-(void)setAttributedTextUnanimated:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)sizeToFitAttributedText:(id)arg0 ;


@end


#endif