// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKIDENTITYVIEWCONTROLLER_H
#define EKIDENTITYVIEWCONTROLLER_H

@class UIViewController, CNContactViewController, CNContactStore;
@protocol EKEditItemViewControllerProtocol, EKIdentityProtocol, EKEditItemViewControllerDelegate;



@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol>

 {
    id<EKIdentityProtocol> *_identity;
    CNContactViewController *_personViewController;
    CNContactStore *_store;
}


@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL useCustomBackButton;


+(Class)_CNContactClass;
+(Class)_CNContactStoreClass;
+(Class)_CNContactStoreConfigurationClass;
+(Class)_CNLabeledValueClass;
+(Class)_CNMutableContactClass;
+(id)_CNLabelWork;
+(id)_createContactForIdentity:(id)arg0 ;
+(id)_createContactStore;
+(id)_fetchContactForIdentity:(id)arg0 store:(id)arg1 keysToFetch:(id)arg2 ;
+(id)contactForIdentity:(id)arg0 keysToFetch:(id)arg1 ;
-(Class)_CNContactViewControllerClass;
-(id)CNContactEmailAddressesKey;
-(id)CNContactPhoneNumbersKey;
-(id)initWithIdentity:(id)arg0 ;
-(void)_setIdentity:(id)arg0 ;
-(void)_updateControllerWithContact:(id)arg0 isNew:(BOOL)arg1 ;
-(void)loadView;


@end


#endif