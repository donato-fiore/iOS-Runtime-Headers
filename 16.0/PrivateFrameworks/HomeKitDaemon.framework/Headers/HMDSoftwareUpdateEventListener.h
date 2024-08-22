// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSOFTWAREUPDATEEVENTLISTENER_H
#define HMDSOFTWAREUPDATEEVENTLISTENER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMEEventConsumer;


#import "HMDSoftwareUpdateEventListenerContext.h"

@interface HMDSoftwareUpdateEventListener : HMFObject <HMFLogging, HMEEventConsumer>



@property (readonly) HMDSoftwareUpdateEventListenerContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isSoftwareUpdateDownloadedAndReadyForInstallation;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithContext:(id)arg0 ;
-(id)logIdentifier;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)registerForEvents;


@end


#endif