// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWREMOTECONNECTIONWRAPPER_H
#define NWREMOTECONNECTIONWRAPPER_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "NWConnection.h"

@interface NWRemoteConnectionWrapper : NSObject

@property (retain) NSUUID *clientID; // ivar: _clientID
@property (retain) NWConnection *connection; // ivar: _connection




@end


#endif