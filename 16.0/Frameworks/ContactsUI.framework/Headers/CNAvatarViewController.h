// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARVIEWCONTROLLER_H
#define CNAVATARVIEWCONTROLLER_H

@class UIViewController, CNContactStore, NSArray, NSString, UIView;
@protocol CNAvatarViewController_Private, CNAvatarViewController, CNAvatarViewControllerDelegate, CNUIPRLikenessResolver, CNUIObjectViewControllerDelegate;



@interface CNAvatarViewController : UIViewController <CNAvatarViewController_Private, CNAvatarViewController>



@property (nonatomic) BOOL allowStaleRendering; // ivar: _allowStaleRendering
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUIPRLikenessResolver> *likenessResolver;
@property (weak, nonatomic) NSObject<CNUIObjectViewControllerDelegate> *objectViewControllerDelegate; // ivar: objectViewControllerDelegate
@property (readonly) Class superclass;
@property (nonatomic, getter=isThreeDTouchEnabled) BOOL threeDTouchEnabled;
@property (readonly, nonatomic) UIView *view;


+(Class)defaultImplementation;
+(id)descriptorForRequiredKeysWithThreeDTouchEnabled:(BOOL)arg0 ;
-(id)descriptorForRequiredKeys;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSettings:(id)arg0 ;
-(void)updateViewWithGroupIdentity:(id)arg0 ;


@end


#endif