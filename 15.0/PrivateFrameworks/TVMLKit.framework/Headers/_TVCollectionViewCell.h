// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVCOLLECTIONVIEWCELL_H
#define _TVCOLLECTIONVIEWCELL_H

@class NSString, UIView<TVAuxiliaryViewSelecting>;
@protocol TVAuxiliaryViewSelecting;


#import "TVContainerCollectionViewCell.h"

@interface _TVCollectionViewCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIView<TVAuxiliaryViewSelecting> *selectingView; // ivar: _selectingView
@property (readonly) Class superclass;


-(struct UIEdgeInsets )selectionMarginsForSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif