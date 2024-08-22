// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPPHOTOSFACEPAIR_H
#define VCPPHOTOSFACEPAIR_H


#import <Foundation/Foundation.h>

#import "VCPPhotosFace.h"

@interface VCPPhotosFacePair : NSObject

@property (readonly, nonatomic) VCPPhotosFace *face1; // ivar: _face1
@property (readonly, nonatomic) VCPPhotosFace *face2; // ivar: _face2
@property (readonly, nonatomic) CGFloat score; // ivar: _score


+(id)pairWithFace:(id)arg0 andFace:(id)arg1 andScore:(CGFloat)arg2 ;
-(id)initWithFace:(id)arg0 andFace:(id)arg1 andScore:(CGFloat)arg2 ;


@end


#endif