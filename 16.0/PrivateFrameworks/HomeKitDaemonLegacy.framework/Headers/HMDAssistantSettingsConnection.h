// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDASSISTANTSETTINGSCONNECTION_H
#define HMDASSISTANTSETTINGSCONNECTION_H

@class HMFObject, NSString, HMFScheduler;
@protocol HMFLogging, HMDAssistantSettingsConnectionDataSource;



@interface HMDAssistantSettingsConnection : HMFObject <HMFLogging, HMDAssistantSettingsConnectionDataSource>



@property (weak) NSObject<HMDAssistantSettingsConnectionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFScheduler *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


+(id)logCategory;
-(id)connectionForEndpointUUID:(id)arg0 ;
-(id)deleteSiriHistoryOperationWithConnection:(id)arg0 ;
-(id)initWithScheduler:(id)arg0 ;
-(void)deleteSiriHistoryWithEndpointUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif