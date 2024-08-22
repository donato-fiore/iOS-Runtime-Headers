// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEXPCPROXY_H
#define AEXPCPROXY_H

@class NSXPCConnection, NSXPCInterface;
@protocol AEXPCConnectionOrigin;

#import <Foundation/Foundation.h>


@interface AEXPCProxy : NSObject {
    NSXPCConnection *_connection;
    id<AEXPCConnectionOrigin> *_origin;
    NSXPCInterface *_interface;
}




-(void)dealloc;


@end


#endif