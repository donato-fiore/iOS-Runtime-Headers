// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMCDAYSUMMARYOBSERVERQUERYSERVER_H
#define HDMCDAYSUMMARYOBSERVERQUERYSERVER_H

@class HDQueryServer, _HKDelayedOperation, NSString;
@protocol HDDataObserver;


#import "HDMCProfileExtension.h"

@interface HDMCDaySummaryObserverQueryServer : HDQueryServer <HDDataObserver>

 {
    HDMCProfileExtension *_profileExtension;
    _HKDelayedOperation *_updateOperation;
    BOOL _requiresUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)queryClass;
+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(BOOL)_shouldListenForUpdates;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 profileExtension:(id)arg4 ;
-(id)objectTypes;
-(void)_queue_deliverUpdate;
-(void)_queue_start;
-(void)_queue_stop;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif