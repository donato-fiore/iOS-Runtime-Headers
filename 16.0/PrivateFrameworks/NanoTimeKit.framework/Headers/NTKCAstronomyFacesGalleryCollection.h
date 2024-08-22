// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCASTRONOMYFACESGALLERYCOLLECTION_H
#define NTKCASTRONOMYFACESGALLERYCOLLECTION_H



#import "NTKDeviceSpecificFacesArrayGalleryCollection.h"

@interface NTKCAstronomyFacesGalleryCollection : NTKDeviceSpecificFacesArrayGalleryCollection



+(id)_gloryDefaultFacesForDevice:(id)arg0 ;
+(id)_legacyDefaultFacesForDevice:(id)arg0 ;
+(id)complicationTypesBySlot;
-(id)descriptionText;
-(id)facesForDevice:(id)arg0 ;
-(id)title;


@end


#endif