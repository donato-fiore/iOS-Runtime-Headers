// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6HOMEUI15ROOMSPEAKERCELL_H
#define _TTC6HOMEUI15ROOMSPEAKERCELL_H

@class UICollectionViewListCell, HFItem;
@protocol HUCellProtocol;



@interface _TtC6HomeUI15RoomSpeakerCell : UICollectionViewListCell <HUCellProtocol>

 {
    ? iconSize;
    ? $__lazy_storage_$_checkmarkAccessoryView;
    ? $__lazy_storage_$_iconView;
    ? $__lazy_storage_$_textLabel;
    ? $__lazy_storage_$_checkmarkCellAccessory;
}


@property (nonatomic, retain) HFItem *item; // ivar: item


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif