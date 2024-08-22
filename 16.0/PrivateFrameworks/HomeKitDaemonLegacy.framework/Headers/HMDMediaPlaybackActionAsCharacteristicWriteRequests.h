// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAPLAYBACKACTIONASCHARACTERISTICWRITEREQUESTS_H
#define HMDMEDIAPLAYBACKACTIONASCHARACTERISTICWRITEREQUESTS_H

@class HMFObject, NSArray;


#import "HMDMediaPlaybackAction.h"

@interface HMDMediaPlaybackActionAsCharacteristicWriteRequests : HMFObject

@property (readonly) NSArray *characteristicWriteRequests; // ivar: _characteristicWriteRequests
@property (readonly) HMDMediaPlaybackAction *residualAction; // ivar: _residualAction


-(id)init;
-(id)initWithAction:(id)arg0 characteristicWriteRequests:(id)arg1 ;


@end


#endif