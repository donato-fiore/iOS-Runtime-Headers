// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLRANGINGPEERDISTANCEINTERNAL_H
#define _CLRANGINGPEERDISTANCEINTERNAL_H

@class NSDate, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_CLRangingPeer.h"

@interface _CLRangingPeerDistanceInternal : NSObject <NSCopying>

 {
    _CLRangingPeer *_peer;
    NSDate *_date;
    NSNumber *_distanceMeters;
    NSNumber *_accuracyMeters;
    BOOL _initiator;
    BOOL _shouldUnlock;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPeer:(id)arg0 date:(id)arg1 distanceMeters:(id)arg2 accuracyMeters:(id)arg3 initiator:(BOOL)arg4 shouldUnlock:(BOOL)arg5 ;
-(void)dealloc;


@end


#endif