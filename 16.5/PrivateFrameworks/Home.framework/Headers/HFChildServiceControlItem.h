// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCHILDSERVICECONTROLITEM_H
#define HFCHILDSERVICECONTROLITEM_H

@class HMService;


#import "HFControlItem.h"
#import "HFChildServiceFilter.h"

@interface HFChildServiceControlItem : HFControlItem

@property (readonly, nonatomic) HFChildServiceFilter *childServiceFilter; // ivar: _childServiceFilter
@property (readonly, nonatomic) HMService *parentService; // ivar: _parentService


+(Class)valueClass;
-(BOOL)supportsItemRepresentingServices:(id)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)characteristicValuesForValue:(id)arg0 ;
-(id)copyWithCharacteristicOptions:(id)arg0 valueSource:(id)arg1 ;
-(id)initWithBaseValueSource:(id)arg0 parentService:(id)arg1 childServiceFilter:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg0 characteristicOptions:(id)arg1 displayResults:(id)arg2 ;
-(id)normalizedValueForValue:(id)arg0 ;
-(id)valueForCharacteristicValues:(id)arg0 ;


@end


#endif