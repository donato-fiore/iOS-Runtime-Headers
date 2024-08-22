// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDZONEGATEKEEPER_H
#define CKDZONEGATEKEEPER_H


#import <Foundation/Foundation.h>

#import "CKDZoneGatekeeperImplementation.h"

@interface CKDZoneGatekeeper : NSObject

@property (retain, nonatomic) CKDZoneGatekeeperImplementation *background; // ivar: _background
@property (retain, nonatomic) CKDZoneGatekeeperImplementation *foreground; // ivar: _foreground


+(id)gatekeeperForContainerID:(id)arg0 accountID:(id)arg1 ;
-(BOOL)hasStatusToReport;
-(id)CKStatusReportArray;
-(id)_init;
-(void)registerWaiter:(id)arg0 forZoneIDs:(id)arg1 expectDelayBeforeRequestBegins:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)relinquishLocksForWaiter:(id)arg0 deferRelinquish:(BOOL)arg1 ;


@end


#endif