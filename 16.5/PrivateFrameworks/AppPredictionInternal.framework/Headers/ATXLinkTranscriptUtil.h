// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLINKTRANSCRIPTUTIL_H
#define ATXLINKTRANSCRIPTUTIL_H


#import <Foundation/Foundation.h>


@interface ATXLinkTranscriptUtil : NSObject



+(id)linkTranscriptPublisherForBundleId:(id)arg0 fromDate:(id)arg1 toDate:(id)arg2 maxEvents:(id)arg3 reversed:(BOOL)arg4 error:(*id)arg5 ;
+(id)systemLinkTranscriptPublisherFromDate:(id)arg0 toDate:(id)arg1 error:(*id)arg2 ;


@end


#endif