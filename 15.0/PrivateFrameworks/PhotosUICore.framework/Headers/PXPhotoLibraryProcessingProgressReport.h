// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOLIBRARYPROCESSINGPROGRESSREPORT_H
#define PXPHOTOLIBRARYPROCESSINGPROGRESSREPORT_H


#import <Foundation/Foundation.h>


@interface PXPhotoLibraryProcessingProgressReport : NSObject



+(id)colorForComplete;
+(id)colorForDefault;
+(id)colorForNotEnriched;
+(id)colorForPartial;
+(id)colorForSceneComplete;
+(id)highlightEnrichmentProgressImageWithProgressReport:(struct ? )arg0 ;
+(id)syndicationProgressImageWithProgressReport:(struct ? )arg0 ;
+(void)getHighlightEnrichmentProgressForLibrary:(id)arg0 result:(id)arg1 ;
+(void)getProcessingProgressForLibrary:(id)arg0 result:(id)arg1 ;
+(void)getSyndicationProgressForLibrary:(id)arg0 result:(id)arg1 ;
+(void)requestBriefDescriptionForLibrary:(id)arg0 resultBlock:(id)arg1 ;
+(void)requestFullDescriptionForLibrary:(id)arg0 resultBlock:(id)arg1 ;
+(void)requestProgressForLibrary:(id)arg0 resultBlock:(id)arg1 ;


@end


#endif