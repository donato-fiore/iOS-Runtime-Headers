// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYLAYOUTSPECMANAGER_H
#define PXSTORYLAYOUTSPECMANAGER_H

@protocol PXStoryLayoutSpec;


#import "PXFeatureSpecManager.h"

@interface PXStoryLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) NSObject<PXStoryLayoutSpec> *layoutSpec;
@property (readonly, nonatomic) NSUInteger storyConfigurationOptions; // ivar: _storyConfigurationOptions


-(Class)specClass;
-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 storyConfigurationOptions:(NSUInteger)arg2 ;
-(void)_observeSharedLibraryStatusIfNeeded;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif