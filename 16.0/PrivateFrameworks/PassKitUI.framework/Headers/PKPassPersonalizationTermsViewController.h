// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSPERSONALIZATIONTERMSVIEWCONTROLLER_H
#define PKPASSPERSONALIZATIONTERMSVIEWCONTROLLER_H

@class UIViewController, UITextView, NSString;
@protocol PKPassPersonalizationTermsViewControllerDelegate;



@interface PKPassPersonalizationTermsViewController : UIViewController {
    UITextView *_textView;
}


@property (weak, nonatomic) NSObject<PKPassPersonalizationTermsViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *termsAndConditions; // ivar: _termsAndConditions


-(id)initWithTermsAndConditions:(id)arg0 ;
-(void)_acceptButtonPressed:(id)arg0 ;
-(void)_applyTermsAndConditions;
-(void)_declineButtonPressed:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif