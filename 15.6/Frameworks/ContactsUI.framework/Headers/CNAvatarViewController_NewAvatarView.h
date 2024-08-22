// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATARVIEWCONTROLLER_NEWAVATARVIEW_H
#define CNAVATARVIEWCONTROLLER_NEWAVATARVIEW_H

@class NSArray, CNContactStore, NSString, PRPersonaStore;
@protocol _CNAvatarViewDelegate, CNUIPRLikenessResolver;


#import "CNAvatarViewController.h"
#import "_CNAvatarView.h"

@interface CNAvatarViewController_NewAvatarView : CNAvatarViewController <_CNAvatarViewDelegate>

 {
    NSArray *_contacts;
}


@property (nonatomic) BOOL animated; // ivar: _animated
@property (weak, nonatomic) _CNAvatarView *avatarView; // ivar: _avatarView
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *likenessProviders; // ivar: _likenessProviders
@property (readonly, nonatomic) NSObject<CNUIPRLikenessResolver> *likenessResolver; // ivar: _likenessResolver
@property (readonly, nonatomic) PRPersonaStore *personaStore; // ivar: _personaStore
@property (readonly) Class superclass;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled; // ivar: _threeDTouchEnabled


+(BOOL)defaultThreeDTouchSupport;
-(id)contacts;
-(id)descriptorForRequiredKeys;
-(id)initWithSettings:(id)arg0 ;
-(void)loadView;
-(void)setContacts:(id)arg0 ;


@end


#endif