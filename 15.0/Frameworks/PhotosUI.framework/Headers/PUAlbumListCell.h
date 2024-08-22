// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMLISTCELL_H
#define PUALBUMLISTCELL_H

@class UICollectionViewCell;


#import "PUAlbumListCellContentView.h"

@interface PUAlbumListCell : UICollectionViewCell

@property (readonly, nonatomic) PUAlbumListCellContentView *albumListCellContentView;


-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg0 ;
-(void)didTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)willTransitionFromLayout:(id)arg0 toLayout:(id)arg1 ;


@end


#endif