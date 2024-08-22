// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDCELL_H
#define _UIKEYSHORTCUTHUDCELL_H



#import "UICollectionViewListCell.h"

@interface _UIKeyShortcutHUDCell : UICollectionViewListCell

@property (readonly, nonatomic, getter=isBackgroundVisible) BOOL backgroundVisible;
@property (nonatomic, getter=isCategoryVisible) BOOL categoryVisible; // ivar: _categoryVisible
@property (nonatomic) BOOL drawsBackground; // ivar: _drawsBackground
@property (nonatomic, getter=isFlashing) BOOL flashing; // ivar: _flashing


-(BOOL)_shouldSkipKeyCommand:(id)arg0 forMovement:(NSInteger)arg1 ;
-(BOOL)canBecomeFocused;
-(NSInteger)_backgroundStyleForState:(id)arg0 ;
-(NSInteger)_focusItemDeferralMode;
-(id)_defaultFocusEffect;
-(id)configurationState;
-(id)defaultContentConfiguration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif