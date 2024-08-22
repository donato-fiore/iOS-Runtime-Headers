// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKSMARTCARDSESSIONREQUEST_H
#define TKSMARTCARDSESSIONREQUEST_H

@class NSXPCConnection, NSDictionary;

#import <Foundation/Foundation.h>


@interface TKSmartCardSessionRequest : NSObject

@property (weak) NSXPCConnection *connection; // ivar: _connection
@property (retain) NSDictionary *parameters; // ivar: _parameters
@property (copy) id *reply; // ivar: _reply




@end


#endif