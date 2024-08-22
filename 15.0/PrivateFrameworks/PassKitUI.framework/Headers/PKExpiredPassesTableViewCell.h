// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKEXPIREDPASSESTABLEVIEWCELL_H
#define PKEXPIREDPASSESTABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSString, PKPass;



@interface PKExpiredPassesTableViewCell : UITableViewCell {
    BOOL _isSmall;
    BOOL _isZoomedMode;
    BOOL _isAccessibilityCategory;
    CGFloat _minimumScaleFactor;
    UILabel *_secondaryDetailTextLabel;
}


@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) PKPass *pass; // ivar: _pass
@property (copy, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (copy, nonatomic) NSString *secondaryDetailText; // ivar: _secondaryDetailText
@property (nonatomic) BOOL showImage; // ivar: _showImage


+(BOOL)isSmallPhone;
+(BOOL)isZoomedMode;
+(BOOL)needsFullPassImage;
+(CGFloat)height;
+(struct CGSize )imageSize;
-(id)initWithReuseIdentifier:(id)arg0 showImage:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setImage:(id)arg0 forPass:(id)arg1 ;


@end


#endif