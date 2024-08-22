// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTIPKITCOLLECTIONVIEWCELL_H
#define CKTIPKITCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, TPKContentView;



@interface CKTipKitCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) TPKContentView *tipKitContentView; // ivar: _tipKitContentView


+(id)reuseIdentifier;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)dealloc;


@end


#endif