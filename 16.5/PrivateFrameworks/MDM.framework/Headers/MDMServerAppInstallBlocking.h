// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMSERVERAPPINSTALLBLOCKING_H
#define MDMSERVERAPPINSTALLBLOCKING_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MDMServerCore.h"

@interface MDMServerAppInstallBlocking : NSObject

@property (copy, nonatomic) id *appBlockCompletionBlock; // ivar: _appBlockCompletionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *appBlockQueue; // ivar: _appBlockQueue
@property (weak, nonatomic) MDMServerCore *server; // ivar: _server


-(BOOL)isAppInstallBlocked;
-(id)init;
-(void)blockAppInstallsWithCompletion:(id)arg0 ;
-(void)didUnblockAppInstalls;
-(void)unblockAppInstallsWithCompletion:(id)arg0 ;


@end


#endif