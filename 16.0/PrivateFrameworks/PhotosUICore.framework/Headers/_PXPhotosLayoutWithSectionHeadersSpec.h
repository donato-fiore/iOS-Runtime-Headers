// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXPHOTOSLAYOUTWITHSECTIONHEADERSSPEC_H
#define _PXPHOTOSLAYOUTWITHSECTIONHEADERSSPEC_H



#import "PXPhotosLayoutSpec.h"
#import "PXPhotosSectionHeaderLayoutSpec.h"

@interface _PXPhotosLayoutWithSectionHeadersSpec : PXPhotosLayoutSpec {
    PXPhotosSectionHeaderLayoutSpec *_sectionHeaderSpec;
}




-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)sectionHeaderSpec;


@end


#endif