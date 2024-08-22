// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEDITABLETEXTICONCELL_H
#define HUEDITABLETEXTICONCELL_H

@class HFItem;
@protocol HUCellProtocol;


#import "HUEditableTextCollectionListCell.h"

@interface HUEditableTextIconCell : HUEditableTextCollectionListCell <HUCellProtocol>

 {
    ? displayStyle;
    ? iconConstraints;
    ? $__lazy_storage_$_iconView;
    ? $__lazy_storage_$_iconContainerView;
    ? $__lazy_storage_$_iconAccessory;
}


@property (nonatomic, retain) HFItem *item; // ivar: item


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif