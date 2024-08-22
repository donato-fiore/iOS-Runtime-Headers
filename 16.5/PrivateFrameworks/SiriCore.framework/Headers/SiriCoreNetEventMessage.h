// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICORENETEVENTMESSAGE_H
#define SIRICORENETEVENTMESSAGE_H

@class NETSchemaNETClientEvent, NSUUID;

#import <Foundation/Foundation.h>


@interface SiriCoreNetEventMessage : NSObject

@property (retain, nonatomic) NETSchemaNETClientEvent *clientEvent; // ivar: _clientEvent
@property (retain, nonatomic) NSUUID *netId; // ivar: _netId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp




@end


#endif