// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSEARCHCOLLECTIONVIEW_H
#define CKSEARCHCOLLECTIONVIEW_H

@class UICollectionView;



@interface CKSearchCollectionView : UICollectionView

@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing; // ivar: __ck_editing
@property (nonatomic) BOOL lockContentOffset; // ivar: _lockContentOffset
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (nonatomic) BOOL suppressDatasourceUpdates; // ivar: _suppressDatasourceUpdates


-(id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndexPath:(id)arg1 ;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg0 withReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setDataSource:(id)arg0 ;


@end


#endif