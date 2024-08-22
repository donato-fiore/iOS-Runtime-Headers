// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSSYSTEMSHELLCONTROLSERVICE_H
#define BKSSYSTEMSHELLCONTROLSERVICE_H

@class BSServiceConnection, NSString;
@protocol BKSSystemShellControlClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKSSystemShellControlService : NSObject <BKSSystemShellControlClientInterface>

 {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)initWithCalloutQueue:(id)arg0 ;
-(void)_activateServerConnection;
-(void)terminateSystemShellWithJobLabel:(id)arg0 ;


@end


#endif