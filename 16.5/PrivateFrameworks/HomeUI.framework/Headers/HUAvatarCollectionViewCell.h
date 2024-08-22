// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAVATARCOLLECTIONVIEWCELL_H
#define HUAVATARCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, UIView, NSString, HFItem, HFUserHandle;
@protocol HUCellProtocol, UIContentConfiguration, CNAvatarViewController, HUResizableCellDelegate;


#import "HUAvatarContentView.h"

@interface HUAvatarCollectionViewCell : UICollectionViewListCell <HUCellProtocol>

 {
    id<UIContentConfiguration> *_contentConfiguration;
}


@property (retain, nonatomic) HUAvatarContentView *avatarContentView; // ivar: _avatarContentView
@property (nonatomic) CGFloat avatarSize; // ivar: _avatarSize
@property (readonly, nonatomic) UIView *avatarView; // ivar: _avatarView
@property (readonly, nonatomic) NSObject<CNAvatarViewController> *avatarViewController; // ivar: _avatarViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) BOOL showAccessLevelDescription; // ivar: _showAccessLevelDescription
@property (readonly) Class superclass;
@property (retain, nonatomic) HFUserHandle *userHandle;


-(id)contentConfiguration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraints;
-(void)prepareForReuse;
-(void)setContentConfiguration:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif