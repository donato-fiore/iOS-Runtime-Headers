// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOSLAYOUTSPECMANAGER_H
#define PXPHOTOSLAYOUTSPECMANAGER_H

@class NSArray;


#import "PXFeatureSpecManager.h"
#import "PXPhotosLayoutSpec.h"

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager

@property (retain, nonatomic) NSArray *availableThumbnailSizes; // ivar: _availableThumbnailSizes
@property (readonly, nonatomic) BOOL sectionHeadersEnabled; // ivar: _sectionHeadersEnabled
@property (readonly, nonatomic) PXPhotosLayoutSpec *spec;


-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg0 change:(NSUInteger)arg1 ;
-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 enableSectionHeaders:(BOOL)arg2 ;


@end


#endif