// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNBADGINGAVATARVIEWCONTROLLER_H
#define CNBADGINGAVATARVIEWCONTROLLER_H

@class UIImage, NSArray, UIView, NSString;
@protocol CNUIObjectViewControllerDelegate, CNUIObjectViewController;

#import <Foundation/Foundation.h>

#import "CNAvatarViewController.h"
#import "CNBadgingAvatarBadgeStyleSettings.h"
#import "CNBadgingAvatarView.h"
#import "CNAvatarAccessoryView.h"

@interface CNBadgingAvatarViewController : NSObject <CNUIObjectViewControllerDelegate, CNUIObjectViewController>



@property (retain, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UIImage *badgeImage; // ivar: _badgeImage
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings; // ivar: _badgeStyleSettings
@property (retain, nonatomic) CNBadgingAvatarView *badgingAvatarView; // ivar: _badgingAvatarView
@property (copy, nonatomic) NSArray *contacts;
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDoNotDisturb; // ivar: _isDoNotDisturb
@property (nonatomic) BOOL isMarkedForSyndication; // ivar: _isMarkedForSyndication
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge; // ivar: _mediaContextBadge
@property (weak, nonatomic) NSObject<CNUIObjectViewControllerDelegate> *objectViewControllerDelegate; // ivar: objectViewControllerDelegate
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)descriptorForRequiredKeys;
-(id)hostingViewControllerForController:(id)arg0 ;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(void)setupContainerViewIfNeeded;


@end


#endif