// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCSHAREDLISTENINGLIVELINKREUSEPOOL_H
#define MPCSHAREDLISTENINGLIVELINKREUSEPOOL_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface MPCSharedListeningLiveLinkReusePool : NSObject {
    NSMapTable *_sessionIDLiveLinkMap;
    os_unfair_lock_s _lock;
}




+(id)sharedReusePool;
-(id)init;
-(id)liveLinkForSessionID:(id)arg0 ;
-(void)storeLiveLink:(id)arg0 forSessionID:(id)arg1 ;


@end


#endif