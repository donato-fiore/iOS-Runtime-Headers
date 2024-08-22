// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACESBUNDLEARRAYGALLERYCOLLECTION_H
#define NTKCFACESBUNDLEARRAYGALLERYCOLLECTION_H

@class CLKDevice;


#import "NTKFacesArrayGalleryCollection.h"
#import "NTKFaceBundle.h"

@interface NTKCFacesBundleArrayGalleryCollection : NTKFacesArrayGalleryCollection

@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NTKFaceBundle *faceBundle; // ivar: _faceBundle


-(id)initWithDevice:(id)arg0 faceBundle:(id)arg1 ;
-(void)loadFaces;


@end


#endif