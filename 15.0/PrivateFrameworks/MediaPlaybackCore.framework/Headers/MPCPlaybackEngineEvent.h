// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCPLAYBACKENGINEEVENT_H
#define MPCPLAYBACKENGINEEVENT_H

@class NSDate, NSUUID, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface MPCPlaybackEngineEvent : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger machAbsoluteTime; // ivar: _machAbsoluteTime
@property (readonly, nonatomic) NSDate *monotonicDate;
@property (readonly, nonatomic) ? monotonicTime; // ivar: _monotonicTime
@property (readonly, nonatomic) NSUInteger monotonicTimeNanoSeconds;
@property (readonly, copy, nonatomic) NSDictionary *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)durationSinceEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithType:(id)arg0 payload:(id)arg1 monotonicTime:(struct ? )arg2 identifier:(id)arg3 ;


@end


#endif