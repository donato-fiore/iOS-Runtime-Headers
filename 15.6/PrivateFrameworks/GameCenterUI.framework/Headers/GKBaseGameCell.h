// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKBASEGAMECELL_H
#define GKBASEGAMECELL_H

@class GKGame, GKGameRecord, UIImageView, UILabel;


#import "GKCollectionViewCell.h"

@interface GKBaseGameCell : GKCollectionViewCell

@property (retain, nonatomic) GKGame *game;
@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


+(CGFloat)defaultRowHeight;
+(id)itemHeightList;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )alignmentRectForText;
-(void)didUpdateModel;
-(void)prepareForReuse;
-(void)setRepresentedItem:(id)arg0 ;


@end


#endif