// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKANALOGVIDEOFACE_H
#define NTKANALOGVIDEOFACE_H



#import "NTKFace.h"

@interface NTKAnalogVideoFace : NTKFace



+(id)_complicationSlotDescriptors;
+(id)_orderedComplicationSlots;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;


@end


#endif