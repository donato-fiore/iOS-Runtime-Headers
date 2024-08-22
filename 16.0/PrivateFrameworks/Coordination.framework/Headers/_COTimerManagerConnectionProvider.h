// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _COTIMERMANAGERCONNECTIONPROVIDER_H
#define _COTIMERMANAGERCONNECTIONPROVIDER_H

@class NSString, NSXPCConnection;
@protocol COTimerManagerConnectionProvider;

#import <Foundation/Foundation.h>


@interface _COTimerManagerConnectionProvider : NSObject <COTimerManagerConnectionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *timerManagerServiceConnection; // ivar: _timerManagerServiceConnection




@end


#endif