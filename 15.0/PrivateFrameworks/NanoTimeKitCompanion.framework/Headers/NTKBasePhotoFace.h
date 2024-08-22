// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKBASEPHOTOFACE_H
#define NTKBASEPHOTOFACE_H



#import "NTKFace.h"

@interface NTKBasePhotoFace : NTKFace



+(BOOL)_customEditModeIsRows:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_complicationSlotDescriptors;
+(id)_defaultSelectedComplicationSlotForDevice:(id)arg0 ;
+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
+(id)_orderedComplicationSlots;
-(BOOL)_allowsEditing;
-(id)_localizedNameForComplicationSlot:(id)arg0 ;


@end


#endif