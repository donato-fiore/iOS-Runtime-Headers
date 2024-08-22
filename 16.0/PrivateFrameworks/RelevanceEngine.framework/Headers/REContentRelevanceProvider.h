// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECONTENTRELEVANCEPROVIDER_H
#define RECONTENTRELEVANCEPROVIDER_H

@class NSArray;


#import "RERelevanceProvider.h"

@interface REContentRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSArray *keywords; // ivar: _keywords


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)init;
-(id)initWithContent:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithKeywords:(id)arg0 ;


@end


#endif