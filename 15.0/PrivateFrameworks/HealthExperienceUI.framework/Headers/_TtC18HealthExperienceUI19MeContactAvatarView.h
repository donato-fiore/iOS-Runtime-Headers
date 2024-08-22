// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI19MECONTACTAVATARVIEW_H
#define _TTC18HEALTHEXPERIENCEUI19MECONTACTAVATARVIEW_H

@class UIView;
@protocol CNAvatarViewControllerDelegate;



@interface _TtC18HealthExperienceUI19MeContactAvatarView : UIView <CNAvatarViewControllerDelegate>

 {
    ? defaultAvatarImageSymbolConfiguration;
    ? contactsAvatarViewController;
    ? defaultAvatarImageView;
    ? avatarSize;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateContentForAvatarViewController:(id)arg0 ;
-(void)meContactCacheDidUpdateWithNotification:(id)arg0 ;


@end


#endif