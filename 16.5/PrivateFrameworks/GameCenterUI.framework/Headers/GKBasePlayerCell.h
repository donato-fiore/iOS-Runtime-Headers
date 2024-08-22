// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKBASEPLAYERCELL_H
#define GKBASEPLAYERCELL_H

@class NSDictionary, UILabel, GKPlayer;


#import "GKCollectionViewCell.h"
#import "GKDashboardPlayerPhotoView.h"

@interface GKBasePlayerCell : GKCollectionViewCell

@property (retain, nonatomic) GKDashboardPlayerPhotoView *iconView; // ivar: _iconView
@property (retain, nonatomic) NSDictionary *metricsOverrides; // ivar: _metricsOverrides
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) GKPlayer *player;


+(BOOL)requiresConstraintBasedLayout;
+(CGFloat)defaultRowHeight;
+(id)itemHeightList;
+(id)itemHeightListForIdiom:(NSInteger)arg0 ;
+(id)padMetrics;
+(id)phoneMetrics;
+(void)initialize;
-(BOOL)canRemoveItem;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)popoverSourceView;
-(struct CGRect )alignmentRectForText;
-(void)didUpdateModel;
-(void)prepareForReuse;
-(void)setRepresentedItem:(id)arg0 ;


@end


#endif