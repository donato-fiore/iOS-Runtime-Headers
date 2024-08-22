// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUPBCLIENTCONNECTION_H
#define AUPBCLIENTCONNECTION_H

@class NSXPCConnection;
@protocol AUPBInspecting;

#import <Foundation/Foundation.h>


@interface AUPBClientConnection : NSObject

@property (retain, nonatomic) NSObject<AUPBInspecting> *proxyInterface; // ivar: proxyInterface
@property (retain, nonatomic) NSXPCConnection *xpcconnection; // ivar: xpcconnection




@end


#endif