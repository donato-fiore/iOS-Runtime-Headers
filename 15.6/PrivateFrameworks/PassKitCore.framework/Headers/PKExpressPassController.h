// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEXPRESSPASSCONTROLLER_H
#define PKEXPRESSPASSCONTROLLER_H

@protocol PKPaymentDataProvider, PKPassLibraryDataProvider;

#import <Foundation/Foundation.h>


@interface PKExpressPassController : NSObject {
    id<PKPaymentDataProvider> *_paymentDataProvider;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
    BOOL _isForWatch;
    BOOL _hasSupportsExpressForAutomaticSelectionTechnologyTypeCheck;
}


@property (nonatomic) NSInteger apiVersion; // ivar: _apiVersion
@property (weak, nonatomic) id *presentingViewController; // ivar: _presentingViewController


-(BOOL)deviceUsesAutomaticAuthorization;
-(BOOL)isExpressModeEnabledForPass:(id)arg0 ;
-(BOOL)supportsLowPowerExpressMode;
-(id)expressModeSupportedForPass:(id)arg0 ;
-(id)expressModeUpgradeRequestForPass:(id)arg0 ;
-(id)expressState;
-(id)initWithPaymentDataProvider:(id)arg0 passLibraryDataProvider:(id)arg1 isForWatch:(BOOL)arg2 ;
-(id)validExpressModeUpgradeRequestForPass:(id)arg0 ;
-(void)conflictingExpressPassesWithPassInformation:(id)arg0 completion:(id)arg1 ;
-(void)disableExpressModeForPass:(id)arg0 withCompletion:(id)arg1 ;
-(void)enableExpressModeWithPassInformation:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;
-(void)upgradeExpressModeForPass:(id)arg0 withCredential:(id)arg1 completion:(id)arg2 ;


@end


#endif