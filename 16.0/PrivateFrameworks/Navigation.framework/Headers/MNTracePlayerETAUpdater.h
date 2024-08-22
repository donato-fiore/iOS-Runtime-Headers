// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACEPLAYERETAUPDATER_H
#define MNTRACEPLAYERETAUPDATER_H



#import "MNSessionUpdateManager.h"

@interface MNTracePlayerETAUpdater : MNSessionUpdateManager



-(id)_serverDisplayETAForResponseInfo:(id)arg0 ;
-(void)playETAUpdate:(id)arg0 ;
-(void)resumeUpdateRequests;
-(void)startUpdateRequestsForRoutes:(id)arg0 andNavigationType:(NSInteger)arg1 ;


@end


#endif