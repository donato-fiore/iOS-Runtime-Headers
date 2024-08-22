// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKWHISTLERSUBDIALSFACE_H
#define NTKWHISTLERSUBDIALSFACE_H

@class NSString;
@protocol NTKFaceComplicationPreviewable;


#import "NTKFace.h"
#import "NTKPigmentEditOptionProvider.h"

@interface NTKWhistlerSubdialsFace : NTKFace <NTKFaceComplicationPreviewable>

 {
    NTKPigmentEditOptionProvider *_pigmentEditOptionProvider;
    BOOL _isGossamerPigmentEditOptionProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg0 ;
+(id)_initialDefaultComplicationForSlot:(id)arg0 forDevice:(id)arg1 ;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
+(id)_richComplicationSlotsForDevice:(id)arg0 ;
+(id)pigmentFaceDomain;
-(BOOL)requiresPigmentEditOption;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_customEditModes;
-(id)_defaultBackgroundOption;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(id)pigmentOptionProvider;
-(void)applyPreviewConfigurationWithFamily:(NSInteger)arg0 faceColor:(NSInteger)arg1 ;


@end


#endif