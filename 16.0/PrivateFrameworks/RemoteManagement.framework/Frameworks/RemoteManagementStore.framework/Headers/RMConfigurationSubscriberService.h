// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMCONFIGURATIONSUBSCRIBERSERVICE_H
#define RMCONFIGURATIONSUBSCRIBERSERVICE_H

@class NSArray;
@protocol RMConfigurationSubscriberXPCService;


#import "RMConfigurationSubscriberClient.h"

@interface RMConfigurationSubscriberService : RMConfigurationSubscriberClient <RMConfigurationSubscriberXPCService>



@property (readonly, nonatomic) NSArray *configurationTypes; // ivar: _configurationTypes
@property (readonly, nonatomic) BOOL hasServiceEntitlement; // ivar: _hasServiceEntitlement
@property (readonly, nonatomic) NSArray *statusKeys; // ivar: _statusKeys


+(id)newConfigurationSubscriberServiceWithXPCConnection:(id)arg0 ;
-(id)initWithXPCConnection:(id)arg0 ;
-(void)fetchThenApplyConfigurationsWithScope:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)publishStatusKeys:(id)arg0 storeIdentifier:(id)arg1 scope:(NSInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif