// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSACCOUNTINFO_H
#define NMSACCOUNTINFO_H

@class ACAccountStore, ACAccount;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMSAccountInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ACAccount *_activeAccount;
}


@property (readonly, nonatomic) ACAccount *activeAccount;


+(id)activeStoreAccountInfo;
-(id)init;
-(void)_handleAccountStoreDidChangeNotification:(id)arg0 ;
-(void)_updateActiveAccount;
-(void)dealloc;
-(void)preloadActiveAccount;


@end


#endif