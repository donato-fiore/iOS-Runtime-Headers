// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMXPCDAEMONCONTROLLERPERFORMERRESOLVER_CHANGETRACKING_H
#define REMXPCDAEMONCONTROLLERPERFORMERRESOLVER_CHANGETRACKING_H



#import "REMXPCDaemonControllerPerformerResolver.h"
#import "REMStoreContainerToken.h"

@interface REMXPCDaemonControllerPerformerResolver_changeTracking : REMXPCDaemonControllerPerformerResolver

@property (readonly, nonatomic) REMStoreContainerToken *storeContainerToken; // ivar: _storeContainerToken


-(id)initWithStoreContainerToken:(id)arg0 ;
-(id)name;
-(void)resolveWithDaemon:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;


@end


#endif