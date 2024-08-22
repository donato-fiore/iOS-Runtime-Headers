// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMLISTTABLEVIEWCELL_H
#define PUALBUMLISTTABLEVIEWCELL_H

@class UITableViewCell;
@protocol PUAlbumListTableViewCellDelegate;



@interface PUAlbumListTableViewCell : UITableViewCell

@property (weak, nonatomic) NSObject<PUAlbumListTableViewCellDelegate> *stateChangeDelegate; // ivar: _stateChangeDelegate


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)willTransitionToState:(NSUInteger)arg0 ;


@end


#endif