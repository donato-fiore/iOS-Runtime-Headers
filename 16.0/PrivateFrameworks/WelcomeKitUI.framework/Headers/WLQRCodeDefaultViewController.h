// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLQRCODEDEFAULTVIEWCONTROLLER_H
#define WLQRCODEDEFAULTVIEWCONTROLLER_H

@class OBLinkTrayButton, UIActivityIndicatorView, NSArray, NSString;
@protocol WLQRCodeProviderDelegate;


#import "WLQRCodeViewController.h"
#import "WLQRCodeProvider.h"

@interface WLQRCodeDefaultViewController : WLQRCodeViewController <WLQRCodeProviderDelegate>

 {
    BOOL _useGooglePlayStore;
    OBLinkTrayButton *_continueButton;
    UIActivityIndicatorView *_indicatorView;
    WLQRCodeProvider *_provider;
}


@property (retain, nonatomic) NSArray *codes; // ivar: _codes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDefaultQRCode;
-(void)_listButtonTapped:(id)arg0 ;
-(void)providerDidProvide:(id)arg0 ;
-(void)pushListViewController;
-(void)requestCodes;
-(void)setIndicatorHidden:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif