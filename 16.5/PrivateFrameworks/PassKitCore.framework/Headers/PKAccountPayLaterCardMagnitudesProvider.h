// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTPAYLATERCARDMAGNITUDESPROVIDER_H
#define PKACCOUNTPAYLATERCARDMAGNITUDESPROVIDER_H

@class NSString;
@protocol PKAccountServiceObserver, PKPayLaterCardMagnitudesProvider;

#import <Foundation/Foundation.h>

#import "PKAccountService.h"
#import "PKPayLaterCardMagnitudes.h"

@interface PKAccountPayLaterCardMagnitudesProvider : NSObject <PKAccountServiceObserver, PKPayLaterCardMagnitudesProvider>

 {
    NSString *_accountIdentifier;
    PKAccountService *_accountService;
    PKPayLaterCardMagnitudes *_magnitudes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(id)initWithAccountIdentifier:(id)arg0 accountService:(id)arg1 ;
-(void)_handleMagnitudesUpdate:(id)arg0 ;
-(void)dealloc;
-(void)payLaterCardMagnitudesChanged:(id)arg0 forAccountIdentifier:(id)arg1 ;
-(void)refreshMagnitudes;


@end


#endif