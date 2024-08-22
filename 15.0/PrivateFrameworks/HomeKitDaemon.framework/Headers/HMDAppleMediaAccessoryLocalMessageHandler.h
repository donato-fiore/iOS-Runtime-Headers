// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYLOCALMESSAGEHANDLER_H
#define HMDAPPLEMEDIAACCESSORYLOCALMESSAGEHANDLER_H

@class NSString, NSUUID;
@protocol HMFLogging, HMDAppleMediaAccessoryLocalMessageHandlerDataSource;

#import <Foundation/Foundation.h>

#import "HMDAssistantSettingsConnection.h"

@interface HMDAppleMediaAccessoryLocalMessageHandler : NSObject <HMFLogging>



@property (readonly) HMDAssistantSettingsConnection *assistantSettingsConnection; // ivar: _assistantSettingsConnection
@property (weak) NSObject<HMDAppleMediaAccessoryLocalMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)dataSourceAccessoryWithUUID:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 assistantSettingsConnection:(id)arg1 ;
-(id)logIdentifier;
-(void)handleSiriEndpointDeleteSiriHistoryMessage:(id)arg0 ;


@end


#endif