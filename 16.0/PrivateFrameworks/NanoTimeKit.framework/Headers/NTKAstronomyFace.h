// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKASTRONOMYFACE_H
#define NTKASTRONOMYFACE_H



#import "NTKFace.h"

@interface NTKAstronomyFace : NTKFace



+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg0 ;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
-(BOOL)_snapshotContext:(id)arg0 isStaleRelativeToContext:(id)arg1 ;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_complicationSlotDescriptors;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_faceDescriptionForLibrary;
-(id)_localizedNameForComplicationSlot:(id)arg0 ;
-(id)_migratedFaceBundleIdentifier;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)_orderedComplicationSlots;


@end


#endif