// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUAVATARTABLEVIEWCELL_H
#define HUAVATARTABLEVIEWCELL_H

@class UITableViewCell, UIView, NSString, HFItem, HFUserHandle;
@protocol HUCellProtocol, UIContentConfiguration, CNAvatarViewController, HUResizableCellDelegate;


#import "HUAvatarContentView.h"

@interface HUAvatarTableViewCell : UITableViewCell <HUCellProtocol>

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
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setContentConfiguration:(id)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif