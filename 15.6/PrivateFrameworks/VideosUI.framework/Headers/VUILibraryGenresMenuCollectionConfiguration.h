// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYGENRESMENUCOLLECTIONCONFIGURATION_H
#define VUILIBRARYGENRESMENUCOLLECTIONCONFIGURATION_H



#import "VUICollectionConfiguration.h"
#import "VUILibraryMenuItemViewCell.h"

@interface VUILibraryGenresMenuCollectionConfiguration : VUICollectionConfiguration

@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // ivar: _menuItemSizingCell


-(CGFloat)minimumLineSpacing;
-(Class)classForCollectionViewCell;
-(id)configureCollectionViewCellForCollectionView:(id)arg0 ForItem:(id)arg1 AtIndexPath:(id)arg2 ;
-(id)configureSizingCellForItem:(id)arg0 AtIndexPath:(id)arg1 ;
-(id)generateCollectionView;


@end


#endif