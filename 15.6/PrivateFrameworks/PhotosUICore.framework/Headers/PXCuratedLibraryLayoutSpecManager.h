// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYLAYOUTSPECMANAGER_H
#define PXCURATEDLIBRARYLAYOUTSPECMANAGER_H

@class NSArray;


#import "PXFeatureSpecManager.h"
#import "PXCuratedLibraryLayoutSpec.h"

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager

@property (retain, nonatomic) NSArray *availableThumbnailSizes; // ivar: _availableThumbnailSizes
@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec;


-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg0 change:(NSUInteger)arg1 ;
-(id)createSpec;


@end


#endif