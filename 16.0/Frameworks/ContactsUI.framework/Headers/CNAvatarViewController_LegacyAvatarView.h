// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARVIEWCONTROLLER_LEGACYAVATARVIEW_H
#define CNAVATARVIEWCONTROLLER_LEGACYAVATARVIEW_H

@class NSArray, CNContactStore, NSString;
@protocol CNAvatarViewDelegate, NSObject><CNAvatarViewControllerDelegate, CNUILikenessRendering, CNSchedulerProvider;


#import "CNAvatarViewController.h"
#import "CNAvatarView.h"

@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate>

 {
    NSArray *_contacts;
}


@property (weak, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NSObject><CNAvatarViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUILikenessRendering> *imageRenderer; // ivar: _imageRenderer
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled; // ivar: _threeDTouchEnabled


-(BOOL)_canShowWhileLocked;
-(id)contacts;
-(id)descriptorForRequiredKeys;
-(id)initWithSettings:(id)arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(void)didUpdateContentForAvatarView:(id)arg0 ;
-(void)loadView;
-(void)setAllowStaleRendering:(BOOL)arg0 ;
-(void)setContacts:(id)arg0 ;
-(void)updateViewWithGroupIdentity:(id)arg0 ;


@end


#endif