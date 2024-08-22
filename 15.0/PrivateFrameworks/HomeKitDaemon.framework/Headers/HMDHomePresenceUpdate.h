// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEPRESENCEUPDATE_H
#define HMDHOMEPRESENCEUPDATE_H

@class HMFObject;


#import "HMDDevice.h"
#import "HMDHomePresence.h"
#import "HMDUserPresence.h"

@interface HMDHomePresenceUpdate : HMFObject

@property (readonly, nonatomic) HMDDevice *causingDevice; // ivar: _causingDevice
@property (readonly, nonatomic) HMDHomePresence *homePresence; // ivar: _homePresence
@property (readonly, nonatomic, getter=isUpdate) BOOL update; // ivar: _update
@property (readonly, nonatomic) HMDUserPresence *userPresence; // ivar: _userPresence


-(id)description;
-(id)initWithHomePresence:(id)arg0 userPresence:(id)arg1 update:(BOOL)arg2 causingDevice:(id)arg3 ;


@end


#endif