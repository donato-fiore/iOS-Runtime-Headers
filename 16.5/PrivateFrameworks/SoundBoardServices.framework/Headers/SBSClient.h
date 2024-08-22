// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSCLIENT_H
#define SBSCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SBSClient : NSObject

@property (nonatomic) NSUInteger clientType; // ivar: _clientType
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection




@end


#endif