// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKEDITABLECOLLECTIONVIEW_H
#define CKEDITABLECOLLECTIONVIEW_H

@class UICollectionView;



@interface CKEditableCollectionView : UICollectionView

@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing; // ivar: __ck_editing
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets


-(id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(struct UIEdgeInsets )safeAreaInsets;


@end


#endif