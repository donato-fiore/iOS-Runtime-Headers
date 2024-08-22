// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVFACECROPSOURCEDESCRIPTOR_H
#define PVFACECROPSOURCEDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PVFace.h"
#import "PVImage.h"

@interface PVFaceCropSourceDescriptor : NSObject <NSCopying>

 {
    PVFace *_face;
    PVImage *_image;
}




+(id)descriptorForFace:(id)arg0 image:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)face;
-(id)image;
-(id)initWithFace:(id)arg0 image:(id)arg1 ;


@end


#endif