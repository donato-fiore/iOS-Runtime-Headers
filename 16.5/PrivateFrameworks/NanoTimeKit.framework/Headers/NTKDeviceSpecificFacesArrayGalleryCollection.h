// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKDEVICESPECIFICFACESARRAYGALLERYCOLLECTION_H
#define NTKDEVICESPECIFICFACESARRAYGALLERYCOLLECTION_H

@class CLKDevice;


#import "NTKFacesArrayGalleryCollection.h"

@interface NTKDeviceSpecificFacesArrayGalleryCollection : NTKFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device; // ivar: _device


-(id)descriptionText;
-(id)facesForDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)title;
-(void)loadFaces;


@end


#endif