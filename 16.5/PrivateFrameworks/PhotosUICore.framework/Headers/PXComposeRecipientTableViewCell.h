// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOMPOSERECIPIENTTABLEVIEWCELL_H
#define PXCOMPOSERECIPIENTTABLEVIEWCELL_H

@class UITableViewCell, UIView, CNAvatarViewController, UILabel, UIImageView, NSString;
@protocol PXChangeObserver;


#import "PXRoundImageView.h"
#import "PXComposeRecipientTableCellModel.h"

@interface PXComposeRecipientTableViewCell : UITableViewCell <PXChangeObserver>

 {
    UIView *_avatarView;
    UIView *_contactAvatarView;
    CNAvatarViewController *_contactAvatarViewController;
    PXRoundImageView *_customAvatarImageView;
    UILabel *_localizedNameLabel;
    UILabel *_addressLabel;
    UIImageView *_accessoryImageView;
}


@property (readonly, nonatomic) PXComposeRecipientTableCellModel *cellModel; // ivar: _cellModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *popoverSourceView; // ivar: _popoverSourceView
@property (readonly) Class superclass;


-(id)_textColor;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateAccessoryImageView;
-(void)_updateAddressLabel;
-(void)_updateAvatarView;
-(void)_updateLocalizedNameLabel;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif