// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLESELECTIONVIEW_H
#define ICTABLESELECTIONVIEW_H

@class UIView;
@protocol ICTableSelectionDelegate;



@interface ICTableSelectionView : UIView

@property (weak, nonatomic) NSObject<ICTableSelectionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldAvoidResigningFirstResponder; // ivar: _shouldAvoidResigningFirstResponder


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(id)preferredTintColor;
-(void)addColumnLeft:(id)arg0 ;
-(void)addColumnRight:(id)arg0 ;
-(void)addRowDown:(id)arg0 ;
-(void)addRowUp:(id)arg0 ;
-(void)dealloc;
-(void)deletePressed:(id)arg0 ;
-(void)strikethrough:(id)arg0 ;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;
-(void)updateAccentColor;
-(void)updateForAccessibilityDarkerSystemColors:(id)arg0 ;


@end


#endif