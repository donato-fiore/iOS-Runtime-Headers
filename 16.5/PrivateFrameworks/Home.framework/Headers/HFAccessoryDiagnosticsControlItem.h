// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYDIAGNOSTICSCONTROLITEM_H
#define HFACCESSORYDIAGNOSTICSCONTROLITEM_H



#import "HFControlItem.h"

@interface HFAccessoryDiagnosticsControlItem : HFControlItem



+(Class)valueClass;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithValueSource:(id)arg0 displayResults:(id)arg1 ;
-(id)resultsForBatchReadResponse:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif