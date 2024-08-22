// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPRESENCEUSERCELL_H
#define HUPRESENCEUSERCELL_H

@class UITableViewCell, UIImageView, NSString, HFUserHandle;
@protocol HUDisableableCellProtocol, CNAvatarViewController;


#import "HULayoutContainerView.h"
#import "HUTitleDescriptionContentView.h"

@interface HUPresenceUserCell : UITableViewCell <HUDisableableCellProtocol>



@property (readonly, nonatomic) HULayoutContainerView *avatarContainerView; // ivar: _avatarContainerView
@property (readonly, nonatomic) NSObject<CNAvatarViewController> *avatarViewController; // ivar: _avatarViewController
@property (nonatomic, getter=isChecked) BOOL checked; // ivar: _checked
@property (readonly, nonatomic) UIImageView *checkmarkImageView; // ivar: _checkmarkImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLocationUnavailable) BOOL locationUnavailable; // ivar: _locationUnavailable
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUTitleDescriptionContentView *titleDescriptionView; // ivar: _titleDescriptionView
@property (retain, nonatomic) HFUserHandle *userHandle; // ivar: _userHandle
@property (copy, nonatomic) NSString *userName; // ivar: _userName


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)_updateCustomSeparatorInset;
-(void)_updateDescriptionText;
-(void)prepareForReuse;


@end


#endif