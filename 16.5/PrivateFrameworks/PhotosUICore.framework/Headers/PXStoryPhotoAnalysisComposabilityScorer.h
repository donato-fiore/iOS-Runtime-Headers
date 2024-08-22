// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPHOTOANALYSISCOMPOSABILITYSCORER_H
#define PXSTORYPHOTOANALYSISCOMPOSABILITYSCORER_H

@class NSString;
@protocol PXStoryAutoEditComposabilityScorer;

#import <Foundation/Foundation.h>


@interface PXStoryPhotoAnalysisComposabilityScorer : NSObject <PXStoryAutoEditComposabilityScorer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)computeComposabilityScoresForDisplayAssets:(id)arg0 error:(*id)arg1 ;


@end


#endif