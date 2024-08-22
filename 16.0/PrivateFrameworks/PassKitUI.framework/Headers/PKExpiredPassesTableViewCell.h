// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEXPIREDPASSESTABLEVIEWCELL_H
#define PKEXPIREDPASSESTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSString, PKPass;


#import "PKPassThumbnailView.h"

@interface PKExpiredPassesTableViewCell : UITableViewCell {
    configuration_t _configuration;
    BOOL _isAccessibilityCategory;
    CGFloat _minimumScaleFactor;
    PKPassThumbnailView *_thumbnailView;
    UILabel *_secondaryDetailTextLabel;
}


@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryDetailText; // ivar: _secondaryDetailText
@property (nonatomic) BOOL showImage; // ivar: _showImage


+(CGFloat)height;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif