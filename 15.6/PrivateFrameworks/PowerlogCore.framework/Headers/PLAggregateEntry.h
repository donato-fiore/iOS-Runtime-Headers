// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAGGREGATEENTRY_H
#define PLAGGREGATEENTRY_H

@class NSString, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PLAggregateEntry : NSObject

@property short aggregateFunction; // ivar: _aggregateFunction
@property (retain) NSString *aggregateKey; // ivar: _aggregateKey
@property CGFloat aggregateValue; // ivar: _aggregateValue
@property (retain) NSString *entryKey; // ivar: _entryKey
@property (retain, nonatomic) NSMutableDictionary *matchingKeyToValue; // ivar: _matchingKeyToValue
@property (retain) NSArray *otherAggregateKeys; // ivar: _otherAggregateKeys


-(id)aggregateOperationWithMatchingPairs:(id)arg0 ;
-(id)description;
-(id)matchingPairs;
-(id)query;
-(void)updateWithValue:(CGFloat)arg0 ;


@end


#endif