// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKONBOARDINGWHATSNEWLISTCELL_H
#define GKONBOARDINGWHATSNEWLISTCELL_H

@class UIView, NSArray, UIImageView, UILabel;



@interface GKOnboardingWhatsNewListCell : UIView

@property (retain, nonatomic) NSArray *axConstraints; // ivar: _axConstraints
@property (readonly, nonatomic) NSUInteger currentCellType; // ivar: _currentCellType
@property (retain, nonatomic) UIImageView *icon; // ivar: _icon
@property (retain, nonatomic) NSArray *normalConstraints; // ivar: _normalConstraints
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)getIconImageFromBundle:(id)arg0 ;
-(id)getIconImageFromSFSymbol:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(void)createConstarints;
-(void)loadView;
-(void)setupCell;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif