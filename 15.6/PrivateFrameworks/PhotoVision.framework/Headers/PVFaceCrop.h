// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVFACECROP_H
#define PVFACECROP_H

@class NSData;


#import "PVObject.h"
#import "PVFace.h"

@interface PVFaceCrop : PVObject {
    NSData *_faceCropData;
    PVFace *_originatingFace;
    CGSize _cachedImageDimensions;
}


@property (nonatomic) short state; // ivar: _state


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)faceCropData;
-(id)initWithFaceCropData:(id)arg0 originatingFace:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 faceCropData:(id)arg1 ;
-(id)originatingFace;
-(struct CGSize )imageDimensions;


@end


#endif