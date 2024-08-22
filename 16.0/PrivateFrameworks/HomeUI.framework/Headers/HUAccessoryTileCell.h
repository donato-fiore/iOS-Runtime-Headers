// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYTILECELL_H
#define HUACCESSORYTILECELL_H

@protocol HUAccessoryTileCellDelegate;


#import "HUTileCell.h"

@interface HUAccessoryTileCell : HUTileCell {
    ? sizeChangeButton;
    ? showUpdatingAfterDelayWorkItem;
    ? showingUpdating;
    ? showingActivity;
    ? showActivityAfterDelayWorkItem;
}


@property (nonatomic, weak) NSObject<HUAccessoryTileCellDelegate> *delegate; // ivar: delegate
@property (nonatomic) BOOL showsSizeChangeButton; // ivar: showsSizeChangeButton


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)tileSizeButtonTappedWithSender:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateSizeChangeButton;


@end


#endif