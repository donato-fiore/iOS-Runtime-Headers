// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFCHARACTERISTICSTATEITEM_H
#define HFCHARACTERISTICSTATEITEM_H

@class NSString;
@protocol NAIdentifiable, HFAggregatedCharacteristicValueSource;


#import "HFItem.h"

@interface HFCharacteristicStateItem : HFItem <NAIdentifiable>



@property (readonly, copy, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *resultsProvider; // ivar: _resultsProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFAggregatedCharacteristicValueSource> *valueSource; // ivar: _valueSource


+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithCharacteristicType:(id)arg0 valueSource:(id)arg1 resultsProvider:(id)arg2 ;


@end


#endif