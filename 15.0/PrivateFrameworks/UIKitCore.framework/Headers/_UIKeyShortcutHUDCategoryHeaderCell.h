// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIKEYSHORTCUTHUDCATEGORYHEADERCELL_H
#define _UIKEYSHORTCUTHUDCATEGORYHEADERCELL_H

@class UIKeyShortcutHUDCell;


#import "_UIKeyShortcutHUDMenu.h"

@interface _UIKeyShortcutHUDCategoryHeaderCell : UIKeyShortcutHUDCell

@property (weak, nonatomic) _UIKeyShortcutHUDMenu *categoryMenu; // ivar: _categoryMenu


-(BOOL)canBecomeFocused;
-(id)defaultContentConfiguration;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)configureWithCategory:(id)arg0 ;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif