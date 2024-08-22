// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSACCESSIBILITYWINDOWHOSTINGCONTROLLER_H
#define SBSACCESSIBILITYWINDOWHOSTINGCONTROLLER_H

@class BSServiceConnection, NSMutableDictionary, NSString;
@protocol SBSAccessibilityWindowHostingServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBSAccessibilityWindowHostingController : NSObject <SBSAccessibilityWindowHostingServerToClientInterface>

 {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableDictionary *_registeredWindowContextIDsToLevel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connectionQueue_connection;
-(id)init;
-(void)_connectionQueue_handleInterruption;
-(void)invalidate;
-(void)registerWindowWithContextID:(unsigned int)arg0 atLevel:(CGFloat)arg1 ;
-(void)unregisterWindowWithContextID:(unsigned int)arg0 ;


@end


#endif