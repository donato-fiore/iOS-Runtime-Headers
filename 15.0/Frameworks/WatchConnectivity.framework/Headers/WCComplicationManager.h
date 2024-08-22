// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WCCOMPLICATIONMANAGER_H
#define WCCOMPLICATIONMANAGER_H

@class NSString;
@protocol WCPrivateXPCManagerDelegate, WCComplicationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WCComplicationManager : NSObject <WCPrivateXPCManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WCComplicationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)xpcManager:(id)arg0 handlePairedSyncComplicationsStartedWithCompletionHandler:(id)arg1 ;
-(void)xpcManager:(id)arg0 handlePingForExtensionBundleID:(id)arg1 ;
-(void)xpcManager:(id)arg0 isExtensionPrivileged:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif