// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDICTIONARYVALUECONTROLITEM_H
#define HFDICTIONARYVALUECONTROLITEM_H

@class NSString;


#import "HFControlItem.h"

@interface HFDictionaryValueControlItem : HFControlItem

@property (readonly, copy, nonatomic) NSString *characteristicType; // ivar: _characteristicType


+(Class)valueClass;
+(id)defaultMainTextColorForCharacteristicType:(id)arg0 ;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg0 characteristicType:(id)arg1 displayResults:(id)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;
-(void)getStatus:(*id)arg0 mainTextColor:(*id)arg1 supplementaryDescription:(*id)arg2 withBatchReadResponse:(id)arg3 ;


@end


#endif