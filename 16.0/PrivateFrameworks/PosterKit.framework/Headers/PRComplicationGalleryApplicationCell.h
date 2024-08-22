// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYAPPLICATIONCELL_H
#define PRCOMPLICATIONGALLERYAPPLICATIONCELL_H

@class UICollectionViewCell, UIView;


#import "PRComplicationGalleryApplicationTitleView.h"

@interface PRComplicationGalleryApplicationCell : UICollectionViewCell

@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (nonatomic, getter=isSeparatorVisible) BOOL separatorVisible; // ivar: _separatorVisible
@property (readonly, nonatomic) PRComplicationGalleryApplicationTitleView *titleView; // ivar: _titleView


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif