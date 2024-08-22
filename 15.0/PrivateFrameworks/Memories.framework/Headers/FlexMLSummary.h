// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXMLSUMMARY_H
#define FLEXMLSUMMARY_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface FlexMLSummary : NSObject

@property (readonly, nonatomic) NSArray *allBars; // ivar: _allBars
@property (readonly, nonatomic) NSArray *allBeats; // ivar: _allBeats
@property (nonatomic) ? duration; // ivar: _duration
@property (nonatomic) CGFloat lkfsValue; // ivar: _lkfsValue
@property (readonly, nonatomic) NSArray *loopPoints; // ivar: _loopPoints
@property (nonatomic) float peakValue; // ivar: _peakValue
@property (retain, nonatomic) NSArray *segments; // ivar: _segments
@property (retain, nonatomic) NSDictionary *videoCues; // ivar: _videoCues


+(id)summaryFromSummaries:(id)arg0 targetTimeScale:(int)arg1 ;
-(id)initWithDictionary:(id)arg0 targetTimeScale:(int)arg1 ;


@end


#endif