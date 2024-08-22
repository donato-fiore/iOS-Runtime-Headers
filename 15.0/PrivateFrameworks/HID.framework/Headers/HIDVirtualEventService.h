// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HIDVIRTUALEVENTSERVICE_H
#define HIDVIRTUALEVENTSERVICE_H

@class HIDServiceClient;
@protocol HIDVirtualEventServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HIDEventSystemClient.h"

@interface HIDVirtualEventService : NSObject

@property (retain) HIDEventSystemClient *client; // ivar: _client
@property (weak) NSObject<HIDVirtualEventServiceDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) HIDServiceClient *serviceClient; // ivar: _serviceClient
@property (readonly) NSUInteger serviceID;


-(BOOL)dispatchEvent:(id)arg0 ;
-(id)description;
-(id)init;
-(void)activate;
-(void)cancel;
-(void)setCancelHandler:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;


@end


#endif