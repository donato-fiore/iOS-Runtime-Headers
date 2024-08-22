// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYCONCRETECOMPANIONTIMELINEASSET_H
#define _PXSTORYCONCRETECOMPANIONTIMELINEASSET_H

@class PHAsset;
@protocol PXStoryCompanionTimelineAsset, PXStoryClip, PXStoryCompanionColorEffect;

#import <Foundation/Foundation.h>


@interface _PXStoryConcreteCompanionTimelineAsset : NSObject <PXStoryCompanionTimelineAsset>



@property (readonly, nonatomic) NSObject<PXStoryClip> *clip; // ivar: _clip
@property (readonly, nonatomic) NSObject<PXStoryCompanionColorEffect> *colorNormalizationEffect;
@property (readonly, nonatomic) ? finalContentsRect;
@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (readonly, nonatomic) ? initialContentsRect;
@property (readonly, nonatomic) PHAsset *photoLibraryAsset;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) ? videoTimeRange;


-(id)initWithFrame:(struct CGRect )arg0 clip:(id)arg1 ;


@end


#endif