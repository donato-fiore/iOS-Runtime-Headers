// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESBITACORAEVENTMANAGER_H
#define DESBITACORAEVENTMANAGER_H



#import "DESEventManager.h"

@interface DESBitacoraEventManager : DESEventManager



+(void)_sendBitacoraEventForBundleID:(id)arg0 event:(id)arg1 identifiers:(id)arg2 ;
+(void)_sendBitacoraEventForEvent:(id)arg0 identifiers:(id)arg1 ;
+(void)initialize;
+(void)sendEventActivityScheduled;
+(void)sendEventTaskCompletedForBundleID:(id)arg0 identifiers:(id)arg1 error:(id)arg2 ;
+(void)sendEventTaskFetchedForBundleID:(id)arg0 identifiers:(id)arg1 ;
+(void)sendEventTaskSchedulingFailedForBundleID:(id)arg0 identifiers:(id)arg1 error:(id)arg2 ;
+(void)sendEventTaskSchedulingSucceededForBundleID:(id)arg0 identifiers:(id)arg1 ;


@end


#endif