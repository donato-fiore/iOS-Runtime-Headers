// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLLOCATIONTRACKRUNINFO_H
#define CLLOCATIONTRACKRUNINFO_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLLocationTrackRunInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int estimatedLaneConfidence; // ivar: _estimatedLaneConfidence
@property (readonly, nonatomic) NSInteger estimatedLaneNumber; // ivar: _estimatedLaneNumber
@property (readonly, nonatomic) NSInteger laneCount; // ivar: _laneCount
@property (readonly, nonatomic) NSInteger laneNumber; // ivar: _laneNumber
@property (readonly, nonatomic) ? lapInfo; // ivar: _lapInfo
@property (readonly, nonatomic) NSNumber *trackId; // ivar: _trackId
@property (readonly, nonatomic) int trackProximity; // ivar: _trackProximity


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLapInfo:(struct ? )arg0 laneNumber:(NSInteger)arg1 laneCount:(NSInteger)arg2 trackId:(id)arg3 estimatedLaneNumber:(NSInteger)arg4 estimatedLaneConfidence:(int)arg5 trackProximity:(int)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif