// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCHARACTERISTICEVENTBUILDERITEM_H
#define HFCHARACTERISTICEVENTBUILDERITEM_H

@class NSSet;


#import "HFEventBuilderItem.h"

@interface HFCharacteristicEventBuilderItem : HFEventBuilderItem

@property (readonly, nonatomic) NSSet *characteristics;


-(BOOL)wouldFireForCharacteristic:(id)arg0 value:(id)arg1 ;
-(id)_characteristicEventBuilderForCharacteristic:(id)arg0 triggerValue:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif