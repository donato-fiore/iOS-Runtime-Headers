// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETEOUTPUTDEVICEBROWSINGSESSION_H
#define CRKCONCRETEOUTPUTDEVICEBROWSINGSESSION_H

@class AVOutputDeviceDiscoverySession, NSNotificationCenter, AVOutputContext, NSArray;
@protocol CRKOutputDeviceBrowsingSession;

#import <Foundation/Foundation.h>


@interface CRKConcreteOutputDeviceBrowsingSession : NSObject <CRKOutputDeviceBrowsingSession>



@property (readonly, nonatomic) AVOutputDeviceDiscoverySession *discoverySession; // ivar: _discoverySession
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) AVOutputContext *outputContext; // ivar: _outputContext
@property (readonly, copy, nonatomic) NSArray *outputDevices;


+(id)sessionWithOutputContext:(id)arg0 notificationCenter:(id)arg1 ;
-(id)initWithDiscoverySession:(id)arg0 outputContext:(id)arg1 notificationCenter:(id)arg2 ;
-(id)observeBrowsedOutputDeviceChangesWithHandler:(id)arg0 ;
-(void)invalidate;


@end


#endif