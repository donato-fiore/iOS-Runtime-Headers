// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENDPOINT_H
#define ENDPOINT_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface Endpoint : NSObject

@property (retain) NSUUID *clientUUID; // ivar: _clientUUID
@property unsigned char requireAck; // ivar: _requireAck
@property BOOL requireEncyption; // ivar: _requireEncyption


-(id)description;


@end


#endif