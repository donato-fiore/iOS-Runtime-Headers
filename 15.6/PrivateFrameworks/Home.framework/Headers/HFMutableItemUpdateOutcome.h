// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMUTABLEITEMUPDATEOUTCOME_H
#define HFMUTABLEITEMUPDATEOUTCOME_H

@class NSMutableDictionary, NSDictionary;


#import "HFItemUpdateOutcome.h"

@interface HFMutableItemUpdateOutcome : HFItemUpdateOutcome

@property (retain, nonatomic) NSMutableDictionary *mutableResults; // ivar: _mutableResults
@property (nonatomic) NSUInteger outcomeType;
@property (retain, nonatomic) NSDictionary *results;


-(id)allKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResults:(id)arg0 type:(NSUInteger)arg1 ;
-(void)addResultsFromDictionary:(id)arg0 ;
-(void)addResultsFromOutcome:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 ;
-(void)removeObjectsForKeys:(id)arg0 ;
-(void)safeSetObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif