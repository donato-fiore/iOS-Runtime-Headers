// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUICONPICKERCOLLECTIONVIEWCELL_H
#define HUICONPICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell;
@protocol HFIconDescriptor;


#import "HUIconButton.h"

@interface HUIconPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) HUIconButton *iconButton; // ivar: _iconButton
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif