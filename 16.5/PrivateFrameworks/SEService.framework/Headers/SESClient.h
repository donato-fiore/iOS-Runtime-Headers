// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SESCLIENT_H
#define SESCLIENT_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SESClient : NSObject {
    NSString *_serviceName;
    NSXPCConnection *_connection;
}






@end


#endif