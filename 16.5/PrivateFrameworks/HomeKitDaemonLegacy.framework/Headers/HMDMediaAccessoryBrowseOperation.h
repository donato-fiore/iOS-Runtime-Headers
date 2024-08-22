// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAACCESSORYBROWSEOPERATION_H
#define HMDMEDIAACCESSORYBROWSEOPERATION_H

@class HMFOperation, NSString, NSArray;
@protocol HMFLogging;


#import "HMDMediaEndpoint.h"

@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging>

 {
    os_unfair_lock_s _lock;
    *void _session;
}


@property (readonly, copy) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDMediaEndpoint *endpoint; // ivar: _endpoint
@property unsigned int endpointFeatures; // ivar: _endpointFeatures
@property (readonly) NSUInteger hash;
@property (readonly) NSArray *outputDevices; // ivar: _outputDevices
@property (readonly) Class superclass;


+(CGFloat)defaultTimeout;
+(id)logCategory;
-(id)initWithAccessoryIdentifier:(id)arg0 ;
-(id)initWithAccessoryIdentifier:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)main;


@end


#endif