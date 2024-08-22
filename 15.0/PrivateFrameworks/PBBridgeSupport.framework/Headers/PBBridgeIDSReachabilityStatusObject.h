// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBBRIDGEIDSREACHABILITYSTATUSOBJECT_H
#define PBBRIDGEIDSREACHABILITYSTATUSOBJECT_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PBBridgeIDSReachabilityStatusObject : NSObject <NSCopying>



@property (retain, nonatomic) NSUUID *idsDeviceID; // ivar: _idsDeviceID
@property (nonatomic) NSUInteger reachability; // ivar: _reachability


+(id)connectivityString:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif