// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKFACESARRAYGALLERYCOLLECTION_H
#define NTKFACESARRAYGALLERYCOLLECTION_H

@class NSArray;


#import "NTKGalleryCollection.h"

@interface NTKFacesArrayGalleryCollection : NTKGalleryCollection

@property (copy, nonatomic) NSArray *faces; // ivar: _faces


-(NSUInteger)indexOfFace:(id)arg0 ;
-(NSUInteger)numberOfFaces;
-(id)faceAtIndex:(NSUInteger)arg0 ;


@end


#endif