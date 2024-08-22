// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCACCOUNTONLINEPERFORMER_H
#define BRCACCOUNTONLINEPERFORMER_H

@class BRDSIDString, NSString;
@protocol BRCReachabilityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCThrottler.h"

@interface BRCAccountOnlinePerformer : NSObject <BRCReachabilityDelegate>

 {
    BRDSIDString *_dsid;
    NSObject<OS_dispatch_queue> *_queue;
    BRCThrottler *_throttler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)addPerformer:(id)arg0 ;
+(void)removePerformer:(id)arg0 ;
-(id)_key;
-(id)initWithDSID:(id)arg0 ;
-(void)_close;
-(void)networkReachabilityChanged:(BOOL)arg0 ;
-(void)perform;
-(void)resumeAndAutoClose;


@end


#endif