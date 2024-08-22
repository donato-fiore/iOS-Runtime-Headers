// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WRMESSAGESREPLYSTOREINFO_H
#define WRMESSAGESREPLYSTOREINFO_H



#import "WRReplyStoreInfo.h"

@interface WRMessagesReplyStoreInfo : WRReplyStoreInfo



-(BOOL)supportsSmartReplies;
-(NSUInteger)defaultCount;
-(id)defaultsChangedNotificationName;
-(id)defaultsDomain;
-(id)defaultsKey;


@end


#endif