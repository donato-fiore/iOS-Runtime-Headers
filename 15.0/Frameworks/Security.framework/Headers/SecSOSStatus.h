// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SECSOSSTATUS_H
#define SECSOSSTATUS_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SecSOSStatus : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection


-(id)init;


@end


#endif