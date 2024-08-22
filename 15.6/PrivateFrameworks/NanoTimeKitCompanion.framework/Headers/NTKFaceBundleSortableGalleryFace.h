// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACEBUNDLESORTABLEGALLERYFACE_H
#define NTKFACEBUNDLESORTABLEGALLERYFACE_H


#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface NTKFaceBundleSortableGalleryFace : NSObject

@property (readonly, nonatomic) NTKFace *face; // ivar: _face
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority


-(NSInteger)compare:(id)arg0 ;
-(id)initWithFace:(id)arg0 priority:(NSUInteger)arg1 ;


@end


#endif