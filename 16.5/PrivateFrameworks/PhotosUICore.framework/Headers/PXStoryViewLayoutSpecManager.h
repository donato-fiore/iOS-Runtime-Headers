// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVIEWLAYOUTSPECMANAGER_H
#define PXSTORYVIEWLAYOUTSPECMANAGER_H

@protocol PXStoryViewLayoutSpec;


#import "PXFeatureSpecManager.h"

@interface PXStoryViewLayoutSpecManager : PXFeatureSpecManager

@property (nonatomic) NSUInteger storyConfigurationOptions; // ivar: _storyConfigurationOptions
@property (readonly, nonatomic) NSObject<PXStoryViewLayoutSpec> *viewLayoutSpec;


-(Class)specClass;
-(id)createSpec;


@end


#endif