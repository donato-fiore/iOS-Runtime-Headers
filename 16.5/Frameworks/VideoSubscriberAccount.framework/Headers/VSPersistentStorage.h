// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSPERSISTENTSTORAGE_H
#define VSPERSISTENTSTORAGE_H


#import <Foundation/Foundation.h>

#import "VSAccountStore.h"
#import "VSAccountChannelsCenter.h"
#import "VSPrivacyFacade.h"
#import "VSPrivacyVoucherLockbox.h"

@interface VSPersistentStorage : NSObject

@property (readonly, nonatomic) VSAccountStore *accountStore; // ivar: _accountStore
@property (readonly, nonatomic) VSAccountChannelsCenter *channelsCenter; // ivar: _channelsCenter
@property (readonly, nonatomic) VSPrivacyFacade *privacyFacade; // ivar: _privacyFacade
@property (readonly, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox; // ivar: _voucherLockbox


+(id)defaultStorageDirectoryURL;
-(id)init;
-(id)initWithAccountStore:(id)arg0 ;
-(id)initWithAccountStore:(id)arg0 channelsCenterClass:(Class)arg1 ;


@end


#endif