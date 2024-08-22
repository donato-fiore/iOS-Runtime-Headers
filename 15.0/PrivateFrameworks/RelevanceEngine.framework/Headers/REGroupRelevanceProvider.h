// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REGROUPRELEVANCEPROVIDER_H
#define REGROUPRELEVANCEPROVIDER_H

@class NSString;


#import "RERelevanceProvider.h"

@interface REGroupRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithGroupIdentifier:(id)arg0 ;


@end


#endif