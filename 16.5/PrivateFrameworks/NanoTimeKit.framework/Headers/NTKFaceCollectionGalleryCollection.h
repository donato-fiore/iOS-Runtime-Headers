// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACECOLLECTIONGALLERYCOLLECTION_H
#define NTKFACECOLLECTIONGALLERYCOLLECTION_H

@class NSString;
@protocol NTKFaceCollectionObserver;


#import "NTKGalleryCollection.h"
#import "NTKFaceCollection.h"

@interface NTKFaceCollectionGalleryCollection : NTKGalleryCollection <NTKFaceCollectionObserver>

 {
    NTKFaceCollection *_faceCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)indexOfFace:(id)arg0 ;
-(NSUInteger)numberOfFaces;
-(id)collectionIdentifier;
-(id)faceAtIndex:(NSUInteger)arg0 ;
-(id)initWithTitle:(id)arg0 faceCollection:(id)arg1 ;
-(void)faceCollection:(id)arg0 didAddFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollection:(id)arg0 didRemoveFace:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)faceCollectionDidLoad:(id)arg0 ;
-(void)faceCollectionDidReorderFaces:(id)arg0 ;


@end


#endif