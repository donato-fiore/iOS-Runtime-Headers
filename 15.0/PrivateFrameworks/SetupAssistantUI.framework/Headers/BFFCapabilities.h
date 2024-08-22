// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BFFCAPABILITIES_H
#define BFFCAPABILITIES_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BFFCapabilities : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // ivar: _fetchQueue
@property (nonatomic) BOOL shouldShowWallet; // ivar: _shouldShowWallet
@property (nonatomic) BOOL shouldShowWalletInitialized; // ivar: _shouldShowWalletInitialized


+(id)sharedCapabilities;
-(BOOL)hasSecureElement;
-(BOOL)isAppleTV;
-(id)init;
-(void)_localeChanged:(id)arg0 ;
-(void)dealloc;
-(void)shouldShowWallet:(id)arg0 ;


@end


#endif