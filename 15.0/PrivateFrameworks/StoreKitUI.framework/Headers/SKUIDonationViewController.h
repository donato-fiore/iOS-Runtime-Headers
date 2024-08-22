// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIDONATIONVIEWCONTROLLER_H
#define SKUIDONATIONVIEWCONTROLLER_H

@class UINavigationController, UIViewController, NSString, NSOperationQueue;


#import "SKUIDonationConfiguration.h"
#import "SKUIClientContext.h"

@interface SKUIDonationViewController : UINavigationController {
    SKUIDonationConfiguration *_donationConfiguration;
    UIViewController *_placeholderViewController;
}


@property (readonly, nonatomic) NSString *charityIdentifier; // ivar: _charityID
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue


-(id)_initSKUIDonationViewController;
-(id)initWithCharityIdentifier:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)_cancelButtonAction:(id)arg0 ;
-(void)_configurationDidLoadWithResult:(BOOL)arg0 error:(id)arg1 ;
-(void)_finishAuthenticateWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_loadDonationConfiguration;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif