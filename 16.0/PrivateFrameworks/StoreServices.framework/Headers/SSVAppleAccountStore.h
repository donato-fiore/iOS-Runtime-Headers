// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVAPPLEACCOUNTSTORE_H
#define SSVAPPLEACCOUNTSTORE_H

@class ACAccountStore, ACAccount;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSVAppleAccountStore : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ACAccount *_primaryAppleAccount;
}


@property (readonly) ACAccount *primaryAppleAccount;


+(id)sharedAccountStore;
-(id)init;
-(void)_accountStoreDidChangeNotification:(id)arg0 ;


@end


#endif