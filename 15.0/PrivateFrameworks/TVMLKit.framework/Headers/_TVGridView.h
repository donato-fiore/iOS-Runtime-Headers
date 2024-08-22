// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVGRIDVIEW_H
#define _TVGRIDVIEW_H

@class TVCollectionView;


#import "_TVCollectionViewFlowLayout.h"

@interface _TVGridView : TVCollectionView {
    BOOL _delegateRespondsToIndexPathForPreferredFocusedView;
}


@property (retain, nonatomic) _TVCollectionViewFlowLayout *gridFlowLayout; // ivar: _gridFlowLayout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )tv_sizeThatFits:(struct CGSize )arg0 withContentInset:(struct UIEdgeInsets )arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif