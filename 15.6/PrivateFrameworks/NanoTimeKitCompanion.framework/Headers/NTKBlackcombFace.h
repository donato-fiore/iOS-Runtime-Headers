// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKBLACKCOMBFACE_H
#define NTKBLACKCOMBFACE_H



#import "NTKFace.h"

@interface NTKBlackcombFace : NTKFace



+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg0 ;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
+(id)_richComplicationSlotsForDevice:(id)arg0 ;
+(id)pigmentFaceDomain;
-(BOOL)supportsPigmentEditOption;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)allowedComplicationsForSlot:(id)arg0 includingComplication:(id)arg1 ;


@end


#endif