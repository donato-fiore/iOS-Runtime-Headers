// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLLECTIONVIEWLISTCELL_H
#define _UICOLLECTIONVIEWLISTCELL_H

@class NSArray;


#import "UICollectionViewListCell.h"
#import "UILayoutGuide.h"

@interface _UICollectionViewListCell : UICollectionViewListCell

@property (nonatomic, setter=_setBackgroundViewConfigurationGrouping:) NSInteger _backgroundViewConfigurationGrouping; // ivar: __backgroundViewConfigurationGrouping
@property (readonly, nonatomic) UILayoutGuide *_separatorLayoutGuide;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL indentsLeadingAccessories;
@property (copy, nonatomic) NSArray *leadingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *leadingEditingAccessoryConfigurations;
@property (nonatomic) NSInteger selectionStyle;
@property (copy, nonatomic) NSArray *trailingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *trailingEditingAccessoryConfigurations;


-(NSInteger)accessoryTypeForAxis:(NSInteger)arg0 ;
-(NSUInteger)_maskedCornersForSystemBackgroundView;
-(id)_configurationForListAccessoryType:(NSInteger)arg0 ;
-(id)_customViewForAccessoryConfiguration:(id)arg0 ;
-(id)accessoryViewForAxis:(NSInteger)arg0 ;
-(void)_setAccessoryConfigurations:(id)arg0 forAxis:(NSInteger)arg1 ;
-(void)setAccessoryType:(NSInteger)arg0 forAxis:(NSInteger)arg1 ;
-(void)setAccessoryView:(id)arg0 forAxis:(NSInteger)arg1 ;


@end


#endif