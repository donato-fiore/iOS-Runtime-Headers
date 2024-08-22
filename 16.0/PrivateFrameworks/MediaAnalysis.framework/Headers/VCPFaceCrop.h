// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPFACECROP_H
#define VCPFACECROP_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "VCPPhotosFace.h"

@interface VCPFaceCrop : NSObject {
    NSData *_faceCropData;
    VCPPhotosFace *_originatingFace;
    CGSize _cachedImageDimensions;
}


@property (readonly, copy, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (nonatomic) short state; // ivar: _state


+(id)generateFaceCropsForFace:(id)arg0 resourceURL:(id)arg1 groupingIdentifier:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)faceCropData;
-(id)initWithFaceCropData:(id)arg0 originatingFace:(id)arg1 ;
-(id)initWithLocalIdentifier:(id)arg0 faceCropData:(id)arg1 ;
-(id)originatingFace;
-(struct CGSize )imageDimensions;


@end


#endif