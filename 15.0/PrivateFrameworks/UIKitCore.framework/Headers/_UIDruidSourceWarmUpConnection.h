// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDRUIDSOURCEWARMUPCONNECTION_H
#define _UIDRUIDSOURCEWARMUPCONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface _UIDruidSourceWarmUpConnection : NSObject {
    NSXPCConnection *_connection;
}




-(void)warmUp;


@end


#endif