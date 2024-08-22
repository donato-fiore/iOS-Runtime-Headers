// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSXPCCONNECTIONENTITLEMENTS_H
#define SIRIANALYTICSXPCCONNECTIONENTITLEMENTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCConnectionEntitlements : NSObject {
    NSArray *_extendedEntitlements;
}


@property (readonly, nonatomic) NSArray *extendedEntitlements;
@property (readonly, nonatomic, getter=hasGenericEntitlement) BOOL genericEntitlement; // ivar: _genericEntitlement
@property (readonly, nonatomic, getter=hasPluginState) BOOL pluginState; // ivar: _pluginState
@property (readonly, nonatomic, getter=canPublishUnordered) BOOL publishUnorderedMessages; // ivar: _publishUnorderedMessages
@property (readonly, nonatomic, getter=hasRuntimeIntrospection) BOOL runtimeIntrospection; // ivar: _runtimeIntrospection
@property (readonly, nonatomic, getter=hasRuntimeManagement) BOOL runtimeManagement; // ivar: _runtimeManagement
@property (readonly, nonatomic, getter=hasUnifiedMessageStreamReadOnlyAccess) BOOL unifiedMessageStreamReadOnlyAccess; // ivar: _unifiedMessageStreamReadOnlyAccess


-(id)initWithEntitlements:(id)arg0 ;


@end


#endif