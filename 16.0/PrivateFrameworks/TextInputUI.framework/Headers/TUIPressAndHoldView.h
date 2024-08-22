// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUIPRESSANDHOLDVIEW_H
#define TUIPRESSANDHOLDVIEW_H

@class UIView, NSArray, NSString, NSIndexPath;
@protocol TUIPressAndHoldGridDelegate, TUIPressAndHoldViewDelegate;


#import "TUIPressAndHoldGrid.h"

@interface TUIPressAndHoldView : UIView <TUIPressAndHoldGridDelegate>



@property (readonly, nonatomic) NSArray *accentVariants; // ivar: _accentVariants
@property (readonly, nonatomic) NSString *currentKeyString; // ivar: _currentKeyString
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUIPressAndHoldViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TUIPressAndHoldGrid *pressAndHoldGrid; // ivar: _pressAndHoldGrid
@property (readonly, nonatomic) NSString *selectedAccentVariant;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;


+(id)accentedCharactersForKeyString:(id)arg0 ;
+(struct CGSize )requiredPopoverSizeForKeyString:(id)arg0 ;
-(BOOL)handleNumberKey:(NSUInteger)arg0 ;
-(BOOL)handleSelection;
-(BOOL)hasAccentVariantInForwardDirection:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 keyString:(id)arg1 ;
-(void)pressAndHoldGridDidAcceptAccentVariant:(id)arg0 atIndexPath:(id)arg1 ;
-(void)showAccentVariantInForwardDirection:(BOOL)arg0 ;


@end


#endif