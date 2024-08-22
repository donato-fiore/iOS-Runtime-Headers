// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCV11ACTIONKITUIP33_B6F79872A61A4CAC49E7CEC1AEFDA78023ACCOUNTLOGINHOSTINGVIEW11COORDINATOR_H
#define _TTCV11ACTIONKITUIP33_B6F79872A61A4CAC49E7CEC1AEFDA78023ACCOUNTLOGINHOSTINGVIEW11COORDINATOR_H

@protocol WFAccountLoginViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV11ActionKitUIP33_B6F79872A61A4CAC49E7CEC1AEFDA78023AccountLoginHostingView11Coordinator : NSObject <WFAccountLoginViewControllerDelegate>

 {
    ? configuration;
}




-(id)init;
-(void)loginViewController:(id)arg0 didLoginWithAccount:(id)arg1 ;
-(void)loginViewControllerDidCancel:(id)arg0 ;


@end


#endif