// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTEXTUALDUETEVENTAGGREGATOR_H
#define TPSCONTEXTUALDUETEVENTAGGREGATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TPSContextualDuetEventBookmark.h"

@interface TPSContextualDuetEventAggregator : NSObject

@property (readonly, copy, nonatomic) TPSContextualDuetEventBookmark *bookmark;
@property (retain, nonatomic) NSMutableDictionary *keyPathObservationMap; // ivar: _keyPathObservationMap
@property (retain, nonatomic) NSMutableDictionary *matchedEventMap; // ivar: _matchedEventMap


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)init;
-(id)initWithBookmark:(id)arg0 ;
-(id)lastEventForKey:(id)arg0 ;
-(id)observationMapForKey:(id)arg0 ;
-(void)_removeOutdatedObservations:(CGFloat)arg0 ;
-(void)_updateLastMatchedEvent:(id)arg0 forKey:(id)arg1 ;
-(void)addObservationResult:(id)arg0 forKey:(id)arg1 ;
-(void)evaluateResultsWithMinObservationCount:(NSUInteger)arg0 maxTimeInterval:(CGFloat)arg1 usingBlock:(id)arg2 ;


@end


#endif