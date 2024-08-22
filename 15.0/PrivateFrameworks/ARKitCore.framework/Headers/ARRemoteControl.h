// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARREMOTECONTROL_H
#define ARREMOTECONTROL_H

@class NSXPCConnection, NSString;
@protocol ARRemoteControlProtocol, ARControlProtocol;

#import <Foundation/Foundation.h>

#import "ARWeakReference.h"

@interface ARRemoteControl : NSObject <ARRemoteControlProtocol>

 {
    NSXPCConnection *_connection;
    ARWeakReference *_exportedObjectWeakReference;
}


@property (readonly, nonatomic) NSObject<ARControlProtocol> *control; // ivar: _control
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<ARControlProtocol> *syncControl;


-(id)init;
-(void)interruptionHandler;
-(void)invalidate;
-(void)invalidationHandler;


@end


#endif