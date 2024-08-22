// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCPEERINFO_H
#define _DKSYNCPEERINFO_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "_DKSyncPeer.h"

@interface _DKSyncPeerInfo : NSObject {
    NSUUID *_uuid;
    _DKSyncPeer *_peer;
    NSInteger _transports;
}




-(id)debugDescription;
-(id)description;


@end


#endif