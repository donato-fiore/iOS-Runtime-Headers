// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _COSTATEMANAGERCONNECTIONPROVIDER_H
#define _COSTATEMANAGERCONNECTIONPROVIDER_H

@class NSString, NSXPCConnection;
@protocol COStateManagerConnectionProvider;

#import <Foundation/Foundation.h>


@interface _COStateManagerConnectionProvider : NSObject <COStateManagerConnectionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCConnection *stateManagerServiceConnection; // ivar: _stateManagerServiceConnection
@property (readonly) Class superclass;




@end


#endif