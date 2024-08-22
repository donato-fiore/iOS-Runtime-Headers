// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDCLIENTINFO_H
#define CKDCLIENTINFO_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDClientInfo : NSObject {
    NSString *_cachedHostname;
    NSObject<OS_dispatch_queue> *_hostCallbackQueue;
    *MGNotificationTokenStruct _hostNotificationToken;
}


@property (readonly, nonatomic) NSString *hostname;


+(id)sharedClientInfo;
-(id)_init;
-(id)init;
-(void)_refreshHostname;
-(void)dealloc;


@end


#endif