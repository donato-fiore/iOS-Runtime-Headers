// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REWORKOUTRELEVANCEPROVIDER_H
#define REWORKOUTRELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"

@interface REWorkoutRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSUInteger state; // ivar: _state


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithState:(NSUInteger)arg0 ;


@end


#endif