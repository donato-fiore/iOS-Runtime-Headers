// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSUGGESTEDPAGESHOMESCREENMODIFICATIONSMETRICSLOGGER_H
#define ATXSUGGESTEDPAGESHOMESCREENMODIFICATIONSMETRICSLOGGER_H

@class NSArray, ATXBMBookmark, NSURL, ATXUniversalBiomeUIStream;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesHomeScreenModificationsMetricsLogger : NSObject

@property (retain, nonatomic) NSArray *acceptedEventTypes; // ivar: _acceptedEventTypes
@property (retain, nonatomic) ATXBMBookmark *atxBookmark; // ivar: _atxBookmark
@property (retain, nonatomic) NSURL *bookmarkURLPath; // ivar: _bookmarkURLPath
@property (retain, nonatomic) ATXUniversalBiomeUIStream *stream; // ivar: _stream


-(NSInteger)logMetrics;
-(id)generateBookmark;
-(id)generateBookmarkURLPath;
-(id)init;
-(id)initWithStream:(id)arg0 bookmarkURLPath:(id)arg1 ;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif