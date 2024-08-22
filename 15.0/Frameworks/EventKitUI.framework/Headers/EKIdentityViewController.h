// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(Class)_CNContactClass;
-(Class)_CNContactStoreClass;
-(Class)_CNContactViewControllerClass;
-(Class)_CNLabeledValueClass;
-(Class)_CNMutableContactClass;
-(id)CNContactEmailAddressesKey;
-(id)CNContactPhoneNumbersKey;
-(id)CNLabelWork;
-(id)contactForIdentity:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 ;
-(void)loadView;
-(void)setIdentity:(id)arg0 ;
-(void)updateControllerWithContact:(id)arg0 isNew:(BOOL)arg1 ;


@end


#endif