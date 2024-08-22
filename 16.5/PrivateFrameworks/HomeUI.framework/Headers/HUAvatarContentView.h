// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAVATARCONTENTVIEW_H
#define HUAVATARCONTENTVIEW_H

@class UIView, NSLayoutConstraint, NSString, NSArray, UIListContentView, HFUserHandle;
@protocol UIContentView, CNAvatarViewController, UIContentConfiguration;



@interface HUAvatarContentView : UIView <UIContentView>



@property (nonatomic) CGFloat avatarSize; // ivar: _avatarSize
@property (readonly, nonatomic) UIView *avatarView;
@property (readonly, nonatomic) NSObject<CNAvatarViewController> *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) NSLayoutConstraint *avatarWidth; // ivar: _avatarWidth
@property (copy, nonatomic) NSObject<UIContentConfiguration> *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *dynamicConstraints; // ivar: _dynamicConstraints
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIListContentView *listContentView; // ivar: _listContentView
@property (readonly) Class superclass;
@property (retain, nonatomic) HFUserHandle *userHandle; // ivar: _userHandle


-(id)initWithConfiguration:(id)arg0 ;


@end


#endif