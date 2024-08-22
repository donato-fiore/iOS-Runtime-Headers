// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDLISTTABLEVIEWCELL_H
#define HUDASHBOARDLISTTABLEVIEWCELL_H

@class UITableViewCell, NSArray, UIImage, UIImageView, NSString, UILabel, UIImageSymbolConfiguration;



@interface HUDashboardListTableViewCell : UITableViewCell

@property (retain, nonatomic) NSArray *allConstraints; // ivar: _allConstraints
@property (retain, nonatomic) UIImage *checkmarkImage; // ivar: _checkmarkImage
@property (retain, nonatomic) UIImageView *checkmarkView; // ivar: _checkmarkView
@property (copy, nonatomic) NSString *dashboardName; // ivar: _dashboardName
@property (retain, nonatomic) UILabel *dashboardNameLabel; // ivar: _dashboardNameLabel
@property (retain, nonatomic) UIImage *favoritesImage; // ivar: _favoritesImage
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIImageSymbolConfiguration *imageConfiguration; // ivar: _imageConfiguration
@property (nonatomic) BOOL isFavorites; // ivar: _isFavorites
@property (retain, nonatomic) UIImage *roomImage; // ivar: _roomImage


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateCheckmarkView;
-(void)updateConstraints;
-(void)updateIconView;


@end


#endif