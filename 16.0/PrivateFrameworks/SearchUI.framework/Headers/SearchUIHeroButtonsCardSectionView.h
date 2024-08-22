// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIHEROBUTTONSCARDSECTIONVIEW_H
#define SEARCHUIHEROBUTTONSCARDSECTIONVIEW_H

@class NSArray, NUIContainerStackView, SFButtonListCardSection;


#import "SearchUICardSectionView.h"

@interface SearchUIHeroButtonsCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NSArray *autoShortcuts; // ivar: _autoShortcuts
@property (retain, nonatomic) NSArray *buttonViews; // ivar: _buttonViews
@property (readonly) NUIContainerStackView *contentView;
@property (readonly, nonatomic) SFButtonListCardSection *section;
@property (retain, nonatomic) NSArray *synthesizedButtonItems; // ivar: _synthesizedButtonItems


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(NSUInteger)maxButtonItems;
+(id)shortcutsForBundleId:(id)arg0 ;
-(id)setupContentView;
-(id)showMoreButtonItem;
-(void)buttonPressed:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif