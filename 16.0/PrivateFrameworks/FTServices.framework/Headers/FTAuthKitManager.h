// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTAUTHKITMANAGER_H
#define FTAUTHKITMANAGER_H

@class AKAppleIDSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FTAuthKitManager : NSObject {
    AKAppleIDSession *_akAppleIDSession;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(id)init;
-(void)anisetteHeadersForRequest:(id)arg0 completionBlockQueue:(id)arg1 completionBlock:(id)arg2 ;
-(void)handleResponse:(id)arg0 forRequest:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif