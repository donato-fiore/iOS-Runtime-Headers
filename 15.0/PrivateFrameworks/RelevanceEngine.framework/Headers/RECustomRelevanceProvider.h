// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RECUSTOMRELEVANCEPROVIDER_H
#define RECUSTOMRELEVANCEPROVIDER_H



#import "RERelevanceProvider.h"
#import "REFeature.h"

@interface RECustomRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) REFeature *feature; // ivar: _feature
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFeature:(id)arg0 value:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif