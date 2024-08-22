// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBUSINESSCHATCONTROLLER_H
#define PKBUSINESSCHATCONTROLLER_H

@class ACAccountStore, AKAnisetteProvisioningController;

#import <Foundation/Foundation.h>


@interface PKBusinessChatController : NSObject {
    ACAccountStore *_accountStore;
    AKAnisetteProvisioningController *_provisioningController;
}




-(id)init;
-(void)_generateAuthBagWithCompletion:(id)arg0 ;
-(void)openBusinessChatWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif