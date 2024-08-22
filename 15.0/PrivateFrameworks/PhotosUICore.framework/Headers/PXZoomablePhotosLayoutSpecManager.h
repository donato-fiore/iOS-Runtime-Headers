// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXZOOMABLEPHOTOSLAYOUTSPECMANAGER_H
#define PXZOOMABLEPHOTOSLAYOUTSPECMANAGER_H

@class NSArray;
@protocol PXZoomablePhotosUserDefaults;


#import "PXFeatureSpecManager.h"
#import "PXZoomablePhotosLayoutSpec.h"

@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager

@property (retain, nonatomic) NSArray *availableThumbnailSizes; // ivar: _availableThumbnailSizes
@property (nonatomic) NSInteger gridStyle; // ivar: _gridStyle
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec;
@property (retain, nonatomic) NSObject<PXZoomablePhotosUserDefaults> *userDefaults; // ivar: _userDefaults


-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg0 change:(NSUInteger)arg1 ;
-(id)createSpec;


@end


#endif