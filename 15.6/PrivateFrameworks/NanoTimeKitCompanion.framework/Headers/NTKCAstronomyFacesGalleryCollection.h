// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCASTRONOMYFACESGALLERYCOLLECTION_H
#define NTKCASTRONOMYFACESGALLERYCOLLECTION_H



#import "NTKDeviceSpecificFacesArrayGalleryCollection.h"

@interface NTKCAstronomyFacesGalleryCollection : NTKDeviceSpecificFacesArrayGalleryCollection



+(id)_gloryDefaultFacesForDevice:(id)arg0 ;
+(id)_legacyDefaultFacesForDevice:(id)arg0 ;
+(id)complicationTypesBySlot;
+(id)facesForDevice:(id)arg0 ;
-(id)descriptionText;
-(id)title;


@end


#endif