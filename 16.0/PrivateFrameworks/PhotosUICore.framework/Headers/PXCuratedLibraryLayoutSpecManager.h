// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCURATEDLIBRARYLAYOUTSPECMANAGER_H
#define PXCURATEDLIBRARYLAYOUTSPECMANAGER_H

@class NSArray;


#import "PXFeatureSpecManager.h"
#import "PXCuratedLibraryLayoutSpec.h"

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager

@property (retain, nonatomic) NSArray *availableThumbnailSizes; // ivar: _availableThumbnailSizes
@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec;
@property (nonatomic) NSInteger variant; // ivar: _variant


-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg0 change:(NSUInteger)arg1 ;
-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 variant:(NSInteger)arg2 ;


@end


#endif