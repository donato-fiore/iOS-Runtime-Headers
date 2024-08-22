// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMMUTABLEASSISTANTACCESSCONTROL_H
#define HMMUTABLEASSISTANTACCESSCONTROL_H

@class NSArray;


#import "HMAssistantAccessControl.h"

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (copy) NSArray *accessories;
@property (getter=areActivityNotificationsEnabledForPersonalRequests) BOOL activityNotificationsEnabledForPersonalRequests;
@property BOOL allowUnauthenticatedRequests;
@property (getter=isEnabled) BOOL enabled;


-(NSUInteger)options;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addAccessory:(id)arg0 ;
-(void)removeAccessory:(id)arg0 ;
-(void)setOptions:(NSUInteger)arg0 ;


@end


#endif