// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFUBIQUITYCONTAINERMONITOR_H
#define PFUBIQUITYCONTAINERMONITOR_H

@class NSString;
@protocol OS_dispatch_queue, NSObject><NSCopying><NSCoding;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "PFUbiquityContainerIdentifier.h"

@interface PFUbiquityContainerMonitor : NSObject {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    int _containerState;
    int _monitorState;
    BOOL _hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    id<NSObject><NSCopying><NSCoding> *_currentIdentityToken;
    PFUbiquityContainerIdentifier *_containerIdentifier;
}




-(id)description;
-(id)init;
-(id)initWithProcessingQueue:(id)arg0 localPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)_applicationResumed:(id)arg0 ;
-(void)containerDeleteDetected:(id)arg0 ;
-(void)dealloc;
-(void)ubiquityIdentityChanged:(id)arg0 ;


@end


#endif