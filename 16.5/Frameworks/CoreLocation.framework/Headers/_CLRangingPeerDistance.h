// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLRANGINGPEERDISTANCE_H
#define _CLRANGINGPEERDISTANCE_H

@class NSNumber, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_CLRangingPeer.h"

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, copy, nonatomic) NSNumber *accuracyMeters;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSNumber *distanceMeters;
@property (readonly, nonatomic, getter=isInitiator) BOOL initiator; // ivar: _initiator
@property (readonly, copy, nonatomic) _CLRangingPeer *peer;
@property (readonly, nonatomic) BOOL shouldUnlock;
@property (readonly, copy, nonatomic) NSDate *timestamp;


+(BOOL)supportsSecureCoding;
-(BOOL)initiator;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeer:(id)arg0 date:(id)arg1 distanceMeters:(id)arg2 accuracyMeters:(id)arg3 initiator:(BOOL)arg4 ;
-(id)initWithPeer:(id)arg0 date:(id)arg1 distanceMeters:(id)arg2 accuracyMeters:(id)arg3 initiator:(BOOL)arg4 shouldUnlock:(BOOL)arg5 ;
-(id)initWithPeer:(id)arg0 timestamp:(id)arg1 distanceMeters:(id)arg2 accuracyMeters:(id)arg3 initiator:(BOOL)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif