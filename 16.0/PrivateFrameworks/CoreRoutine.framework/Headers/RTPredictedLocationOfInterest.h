// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTPREDICTEDLOCATIONOFINTEREST_H
#define RTPREDICTEDLOCATIONOFINTEREST_H

@class NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTLocationOfInterest.h"
#import "RTSource.h"

@interface RTPredictedLocationOfInterest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) RTLocationOfInterest *locationOfInterest; // ivar: _locationOfInterest
@property (nonatomic) NSInteger modeOfTransportation; // ivar: _modeOfTransportation
@property (readonly, nonatomic) NSDate *nextEntryTime; // ivar: _nextEntryTime
@property (readonly, nonatomic) RTSource *source;
@property (readonly, nonatomic) NSArray *sources; // ivar: _sources


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocationOfInterest:(id)arg0 confidence:(CGFloat)arg1 nextEntryTime:(id)arg2 modeOfTransportation:(NSInteger)arg3 sources:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif