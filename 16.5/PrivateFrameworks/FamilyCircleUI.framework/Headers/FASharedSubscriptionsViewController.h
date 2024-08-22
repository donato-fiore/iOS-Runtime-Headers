// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FASHAREDSUBSCRIPTIONSVIEWCONTROLLER_H
#define FASHAREDSUBSCRIPTIONSVIEWCONTROLLER_H

@class ACUIViewController, ACAccount, NSOperationQueue, UITableViewCell, UIActivityIndicatorView, NSString;
@protocol FASharedSubscriptionSpecifierProviderSelectionHandler, AAUISpecifierProviderDelegate;


#import "FASharedSubscriptionSpecifierProvider.h"

@interface FASharedSubscriptionsViewController : ACUIViewController <FASharedSubscriptionSpecifierProviderSelectionHandler, AAUISpecifierProviderDelegate>

 {
    ACAccount *_appleAccount;
    NSOperationQueue *_networkingQueue;
    UITableViewCell *_activeCell;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    UIActivityIndicatorView *_activityIndicatorView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasActiveCell;
-(id)_sharedSubscriptionSpecifiers;
-(id)initWithAppleAccount:(id)arg0 sharedSubscriptionSpecifierProvider:(id)arg1 ;
-(id)preferredContentSizeCategory;
-(id)specifiers;
-(void)_performEventWithContext:(id)arg0 specifier:(id)arg1 completion:(id)arg2 ;
-(void)_startSpinnerInCellLoadingRemoteUI:(id)arg0 ;
-(void)_stopSpinnerInCellLoadingRemoteUI;
-(void)didSelectSpecifier:(id)arg0 ;
-(void)reloadSpecifiersForProvider:(id)arg0 oldSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif