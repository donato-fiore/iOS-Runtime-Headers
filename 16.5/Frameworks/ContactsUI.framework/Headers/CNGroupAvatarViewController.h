// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNGROUPAVATARVIEWCONTROLLER_H
#define CNGROUPAVATARVIEWCONTROLLER_H

@class UIViewController, UIImage;


#import "CNVisualIdentityAvatarViewController.h"
#import "CNBadgingAvatarBadgeStyleSettings.h"
#import "CNGroupIdentity.h"
#import "CNAvatarAccessoryView.h"

@interface CNGroupAvatarViewController : UIViewController

@property (retain, nonatomic) CNVisualIdentityAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UIImage *badgeImage; // ivar: _badgeImage
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings; // ivar: _badgeStyleSettings
@property (retain, nonatomic) CNGroupIdentity *group; // ivar: _group
@property (nonatomic) BOOL isDoNotDisturb; // ivar: _isDoNotDisturb
@property (nonatomic) BOOL isMarkedForSyndication; // ivar: _isMarkedForSyndication
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge; // ivar: _mediaContextBadge


+(NSUInteger)maxContactAvatars;
+(id)descriptorForRequiredKeys;
+(id)log;
-(BOOL)_canShowWhileLocked;
-(BOOL)contactsEqualToContactsFromGroup:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(id)initWithGroup:(id)arg0 avatarViewControllerSettings:(id)arg1 ;
-(void)groupIdentityDidUpdate:(id)arg0 ;
-(void)loadView;


@end


#endif