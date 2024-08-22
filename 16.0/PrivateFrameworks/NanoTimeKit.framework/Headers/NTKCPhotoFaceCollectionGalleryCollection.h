// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCPHOTOFACECOLLECTIONGALLERYCOLLECTION_H
#define NTKCPHOTOFACECOLLECTIONGALLERYCOLLECTION_H

@class CLKDevice, NSString;
@protocol NTKPhotoAlbumObserverDelegate;


#import "NTKFaceCollectionGalleryCollection.h"

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKFaceCollectionGalleryCollection <NTKPhotoAlbumObserverDelegate>

 {
    CLKDevice *_device;
    NSString *_albumName;
}




-(id)initForDevice:(id)arg0 ;
-(id)newFace;
-(void)dealloc;
-(void)photoAlbumChanged;


@end


#endif