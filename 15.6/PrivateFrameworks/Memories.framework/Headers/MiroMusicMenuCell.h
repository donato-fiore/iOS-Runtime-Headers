// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROMUSICMENUCELL_H
#define MIROMUSICMENUCELL_H

@class UITableViewCell, NSLayoutConstraint, UIImageView, NSString, UILabel;


#import "VEKSong.h"

@interface MiroMusicMenuCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *artworkLeadingConstraint; // ivar: _artworkLeadingConstraint
@property (retain, nonatomic) UIImageView *artworkView; // ivar: _artworkView
@property (retain, nonatomic) UIImageView *checkmark; // ivar: _checkmark
@property (retain, nonatomic) NSString *detailText; // ivar: _detailText
@property (retain, nonatomic) UILabel *lowerDetailsLabel; // ivar: _lowerDetailsLabel
@property (retain, nonatomic) NSString *secondaryDetailText; // ivar: _secondaryDetailText
@property (retain, nonatomic) VEKSong *song; // ivar: _song
@property (retain, nonatomic) UILabel *upperDetailsLabel; // ivar: _upperDetailsLabel


-(void)_updateFonts;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif