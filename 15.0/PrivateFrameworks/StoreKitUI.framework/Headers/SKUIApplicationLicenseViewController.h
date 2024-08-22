// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIAPPLICATIONLICENSEVIEWCONTROLLER_H
#define SKUIAPPLICATIONLICENSEVIEWCONTROLLER_H

@class SSVLoadURLOperation, NSURL, UIWebView;


#import "SKUIViewController.h"
#import "SKUIApplicationLicensePage.h"

@interface SKUIApplicationLicenseViewController : SKUIViewController {
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}




-(id)initWithLicenseAgreementPage:(id)arg0 ;
-(id)initWithLicenseAgreementURL:(id)arg0 ;
-(void)_displayPage:(id)arg0 error:(id)arg1 ;
-(void)loadView;
-(void)reloadData;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif