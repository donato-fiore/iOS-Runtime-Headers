// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETECOMPANIONTIMELINE_H
#define PXSTORYCONCRETECOMPANIONTIMELINE_H

@class NSString;
@protocol PXStoryCompanionTimeline, PXStoryCompanionColorEffect, PXStoryColorGradingRepository, PXStoryTimeline;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteCompanionTimeline : NSObject <PXStoryCompanionTimeline>



@property (readonly, nonatomic) NSInteger colorGradeKind; // ivar: _colorGradeKind
@property (readonly, nonatomic) NSObject<PXStoryCompanionColorEffect> *colorGradingEffect;
@property (readonly, nonatomic) NSObject<PXStoryColorGradingRepository> *colorGradingRepository; // ivar: _colorGradingRepository
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSInteger numberOfSegments;
@property (readonly, nonatomic) NSObject<PXStoryTimeline> *timeline; // ivar: _timeline


-(id)init;
-(id)initWithTimeline:(id)arg0 colorGradeKind:(NSInteger)arg1 colorGradingRepository:(id)arg2 ;
-(id)segmentAtIndex:(NSInteger)arg0 ;


@end


#endif