// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REFORCEDRELEVANCEPROVIDER_H
#define REFORCEDRELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"

@interface REForcedRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) BOOL isHistoric; // ivar: _isHistoric
@property (readonly, nonatomic) float relevance; // ivar: _relevance


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithForcedRelevance:(float)arg0 ;
-(id)initWithForcedRelevance:(float)arg0 isHistoric:(BOOL)arg1 ;


@end


#endif