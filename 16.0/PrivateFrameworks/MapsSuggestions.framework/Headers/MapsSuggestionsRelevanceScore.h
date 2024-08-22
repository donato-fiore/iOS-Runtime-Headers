// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSRELEVANCESCORE_H
#define MAPSSUGGESTIONSRELEVANCESCORE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsRelevanceScore : NSObject

@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (retain, nonatomic) NSDate *lastInteractionTime; // ivar: _lastInteractionTime


-(id)initWithConfidence:(CGFloat)arg0 ;


@end


#endif