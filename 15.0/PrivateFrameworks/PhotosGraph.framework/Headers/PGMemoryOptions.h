// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYOPTIONS_H
#define PGMEMORYOPTIONS_H

@class NSDate, NSSet, NSArray, NSDictionary, CLLocation;

#import <Foundation/Foundation.h>


@interface PGMemoryOptions : NSObject

@property (retain, nonatomic) NSDate *baseMemoryCreationUniversalDate; // ivar: _baseMemoryCreationUniversalDate
@property (retain, nonatomic) NSSet *blockedFeatures; // ivar: _blockedFeatures
@property (retain, nonatomic) NSArray *blockedMemories; // ivar: _blockedMemories
@property (retain, nonatomic) NSArray *existingMemories; // ivar: _existingMemories
@property (retain, nonatomic) NSArray *existingSuggestions; // ivar: _existingSuggestions
@property (retain, nonatomic) NSDictionary *extraParameters; // ivar: _extraParameters
@property (nonatomic) CGFloat forcedBeta; // ivar: _forcedBeta
@property (retain, nonatomic) NSDate *lastMemoryCreationUniversalDate; // ivar: _lastMemoryCreationUniversalDate
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (retain, nonatomic) NSArray *peopleNames; // ivar: _peopleNames
@property (nonatomic) NSUInteger randomSeed; // ivar: _randomSeed
@property NSUInteger reason; // ivar: _reason
@property (retain, nonatomic) NSDate *universalDate; // ivar: _universalDate


+(id)stringForReason:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithReason:(NSUInteger)arg0 universalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;


@end


#endif