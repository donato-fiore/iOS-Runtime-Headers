// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTNOTIFICATIONTIMER_H
#define HMDCAMERASNAPSHOTNOTIFICATIONTIMER_H

@class HMFTimer, NSSet, NSArray, NSString;



@interface HMDCameraSnapshotNotificationTimer : HMFTimer

@property (readonly, nonatomic) NSSet *changedCharacteristics; // ivar: _changedCharacteristics
@property (retain, nonatomic) NSArray *postedBulletins; // ivar: _postedBulletins
@property (readonly, nonatomic) NSString *sessionID; // ivar: _sessionID


-(id)initWithCameraSessionID:(id)arg0 changedCharacteristics:(id)arg1 timeInterval:(CGFloat)arg2 ;


@end


#endif