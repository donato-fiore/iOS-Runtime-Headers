// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMOTIONRELEVANCEPROVIDER_H
#define REMOTIONRELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"

@interface REMotionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSUInteger motionTypes; // ivar: _motionTypes


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMotionTypes:(NSUInteger)arg0 ;


@end


#endif