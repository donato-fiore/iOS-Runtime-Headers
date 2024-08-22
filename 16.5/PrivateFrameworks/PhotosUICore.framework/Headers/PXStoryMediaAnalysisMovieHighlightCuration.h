// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMEDIAANALYSISMOVIEHIGHLIGHTCURATION_H
#define PXSTORYMEDIAANALYSISMOVIEHIGHLIGHTCURATION_H

@class NSDictionary, NSString, NSArray;
@protocol PXStoryMovieHighlightCuration, PXStoryMovieHighlight;

#import <Foundation/Foundation.h>


@interface PXStoryMediaAnalysisMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration>

 {
    NSDictionary *_analysis;
}


@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *bestHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *defaultHighlight;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *fullMovie;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *livePhoto;
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlight> *movieSummary;
@property (readonly) Class superclass;


+(id)movieHighlightCurationsFromMediaAnalysisResults:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMediaAnalysis:(id)arg0 ;


@end


#endif