// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPLINKSNAPSHOTGENERATOR_H
#define LPLINKSNAPSHOTGENERATOR_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface LPLinkSnapshotGenerator : NSObject {
    NSXPCConnection *_connectionToService;
    BOOL _active;
}




-(id)init;
-(void)dealloc;
-(void)snapshotForMetadata:(id)arg0 configurations:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif