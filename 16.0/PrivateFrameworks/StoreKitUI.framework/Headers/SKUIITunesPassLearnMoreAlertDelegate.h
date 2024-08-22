// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIITUNESPASSLEARNMOREALERTDELEGATE_H
#define SKUIITUNESPASSLEARNMOREALERTDELEGATE_H

@class NSString, UIViewController;
@protocol UIAlertViewDelegate;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"
#import "SKUIRedeemConfiguration.h"

@interface SKUIITunesPassLearnMoreAlertDelegate : NSObject <UIAlertViewDelegate>

 {
    SKUIClientContext *_clientContext;
    SKUIRedeemConfiguration *_redeemConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


+(BOOL)shouldShowAlertForRedeem:(id)arg0 configuration:(id)arg1 ;
+(void)beginThrottleInterval;
-(id)initWithRedeemConfiguration:(id)arg0 clientContext:(id)arg1 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)show;


@end


#endif