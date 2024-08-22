// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWREMOTECONNECTIONWRITEREQUEST_H
#define NWREMOTECONNECTIONWRITEREQUEST_H

@class NSUUID, NSData;

#import <Foundation/Foundation.h>


@interface NWRemoteConnectionWriteRequest : NSObject

@property (retain) NSUUID *clientID; // ivar: _clientID
@property (retain) NSData *data; // ivar: _data


-(id)initWithData:(id)arg0 clientID:(id)arg1 ;


@end


#endif