// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUPNEXTFACE_H
#define NTKUPNEXTFACE_H



#import "NTKFace.h"

@interface NTKUpNextFace : NTKFace



+(Class)_faceClassOfFaceWithRichComplicationSlotsForDevice:(id)arg0 ;
+(id)_complicationSlotDescriptors;
+(id)_orderedComplicationSlots;
+(id)pigmentFaceDomain;
-(BOOL)_hasOptionsForCustomEditMode:(NSInteger)arg0 ;
-(BOOL)requiresPigmentEditOption;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(NSInteger)_customEditModeForUniqueConfiguration;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;


@end


#endif