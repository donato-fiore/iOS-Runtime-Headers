// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDSYSTEMTASKREQUEST_H
#define HMDBACKGROUNDSYSTEMTASKREQUEST_H

@class HMFObject, NSString, BGRepeatingSystemTaskRequest;



@interface HMDBackgroundSystemTaskRequest : HMFObject

@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) CGFloat minDurationBetweenInstances; // ivar: _minDurationBetweenInstances
@property (nonatomic) BOOL requiresInexpensiveNetworkConnectivity; // ivar: _requiresInexpensiveNetworkConnectivity
@property (nonatomic) BOOL requiresSignificantUserInactivity; // ivar: _requiresSignificantUserInactivity
@property (readonly) BGRepeatingSystemTaskRequest *taskRequest;


-(id)attributeDescriptions;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithTaskRequest:(id)arg0 ;


@end


#endif