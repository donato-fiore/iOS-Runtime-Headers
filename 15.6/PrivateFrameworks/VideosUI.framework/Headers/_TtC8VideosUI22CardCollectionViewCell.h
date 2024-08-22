// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI22CARDCOLLECTIONVIEWCELL_H
#define _TTC8VIDEOSUI22CARDCOLLECTIONVIEWCELL_H



#import "VUIFloatingCollectionViewCell.h"

@interface _TtC8VideosUI22CardCollectionViewCell : VUIFloatingCollectionViewCell {
    ? cardViewLayout;
    ? imageViewModel;
    ? cardView;
    ? syndicationId;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)dealloc;
-(void)vui_cellDidEndDisplaying;
-(void)vui_cellDidSelect;
-(void)vui_cellWillBeDisplayed;
-(void)vui_prepareForReuse;


@end


#endif