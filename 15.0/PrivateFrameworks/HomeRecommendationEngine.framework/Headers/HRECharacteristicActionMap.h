// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRECHARACTERISTICACTIONMAP_H
#define HRECHARACTERISTICACTIONMAP_H

@class NSMutableDictionary;


#import "HREActionMap.h"

@interface HRECharacteristicActionMap : HREActionMap

@property (retain, nonatomic) NSMutableDictionary *characteristicTypeValues; // ivar: _characteristicTypeValues


+(id)characteristicActionMap:(id)arg0 ;
+(id)conditonalCharacteristicActionMap:(id)arg0 condition:(id)arg1 ;
+(id)emptyMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flattenedMapEvaluatedForObject:(id)arg0 ;
-(id)initWithMap:(id)arg0 condition:(id)arg1 ;
-(id)mergeWithActionMaps:(id)arg0 ;


@end


#endif