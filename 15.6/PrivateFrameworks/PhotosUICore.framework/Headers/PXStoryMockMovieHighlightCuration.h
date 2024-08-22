// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYMOCKMOVIEHIGHLIGHTCURATION_H
#define PXSTORYMOCKMOVIEHIGHLIGHTCURATION_H

@class NSArray, NSString;
@protocol PXStoryMovieHighlightCuration, PXStoryMovieHighlight;

#import <Foundation/Foundation.h>


@interface PXStoryMockMovieHighlightCuration : NSObject <PXStoryMovieHighlightCuration>

 {
    NSArray *_highlights;
    id<PXStoryMovieHighlight> *_summary;
    id<PXStoryMovieHighlight> *_live;
    id<PXStoryMovieHighlight> *_movie;
    id<PXStoryMovieHighlight> *_fallback;
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


-(id)init;
-(id)initWithFullMovie:(id)arg0 ;
-(id)initWithHighlights:(id)arg0 fallback:(id)arg1 summary:(id)arg2 live:(id)arg3 full:(id)arg4 ;
-(id)initWithLivePhoto:(id)arg0 ;
-(id)initWithMovieHighlights:(id)arg0 ;
-(id)initWithMovieSummary:(id)arg0 ;


@end


#endif