// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLINTERRUPTBEHAVIORRESOLUTION_H
#define SCLINTERRUPTBEHAVIORRESOLUTION_H

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SCLInterruptBehaviorResolution : NSObject {
    NSString *_clientIdentifier;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}




+(id)resolutionForClientIdentifier:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)resolveBehaviorForEvent:(id)arg0 error:(*id)arg1 ;
-(id)serverConnection;
-(void)setServerConnection:(id)arg0 ;


@end


#endif