// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACESGALLERYCOLLECTION_H
#define NTKFACESGALLERYCOLLECTION_H

@class NSArray, NSString;


#import "NTKDeviceSpecificFacesArrayGalleryCollection.h"

@interface NTKFacesGalleryCollection : NTKDeviceSpecificFacesArrayGalleryCollection {
    NSArray *_faceDescriptors;
    NSString *_title;
}




-(id)facesForDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 title:(id)arg1 faceDescriptors:(id)arg2 ;
-(id)title;


@end


#endif