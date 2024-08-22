// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSXPCCONNECTIONENTITLEMENTS_H
#define SIRIANALYTICSXPCCONNECTIONENTITLEMENTS_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCConnectionEntitlements : NSObject

@property (readonly, nonatomic, getter=hasGenericEntitlement) BOOL genericEntitlement; // ivar: _genericEntitlement
@property (readonly, nonatomic, getter=hasRuntimeManagement) BOOL runtimeManagement; // ivar: _runtimeManagement
@property (readonly, nonatomic, getter=hasUnifiedMessageStreamReadOnlyAccess) BOOL unifiedMessageStreamReadOnlyAccess; // ivar: _unifiedMessageStreamReadOnlyAccess


-(id)initWithEntitlements:(id)arg0 ;


@end


#endif