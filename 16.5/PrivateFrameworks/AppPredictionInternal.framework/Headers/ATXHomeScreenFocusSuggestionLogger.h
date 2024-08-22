// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENFOCUSSUGGESTIONLOGGER_H
#define ATXHOMESCREENFOCUSSUGGESTIONLOGGER_H

@class ATXBiomeSuggestedHomePageStream, NSURL;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenFocusSuggestionLogger : NSObject

@property (retain, nonatomic) ATXBiomeSuggestedHomePageStream *stream; // ivar: _stream
@property (retain, nonatomic) NSURL *suggestedHomePageStreamBookmarkURLPath; // ivar: _suggestedHomePageStreamBookmarkURLPath


-(id)generateSuggestedHomePageStreamBookmark;
-(id)generateSuggestedHomePageStreamBookmarkURLPath;
-(id)init;
-(void)logHomeScreenFocusSuggestionMetrics;
-(void)writeBookmarkToFile:(id)arg0 ;


@end


#endif