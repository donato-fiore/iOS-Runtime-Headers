// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSPOTLIGHTCLIENTRESPONSE_H
#define ATXSPOTLIGHTCLIENTRESPONSE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface ATXSpotlightClientResponse : NSObject {
    NSArray *_scores;
    NSUInteger _signpostId;
}


@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) NSArray *topics; // ivar: _topics


+(NSUInteger)_indexOfFirstSpotlightRecentInServerResults:(id)arg0 withSections:(id)arg1 ;
+(id)_createEmptyResultsWithCount:(NSUInteger)arg0 ;
+(id)_limitingResults:(id)arg0 scores:(id)arg1 spotlightRecentIndex:(NSUInteger)arg2 limit:(NSUInteger)arg3 ;
+(id)_removeDuplicates:(id)arg0 ;
+(id)_resultForError:(id)arg0 subtitles:(id)arg1 ;
+(id)createSectionWithTitle:(id)arg0 sectionBundleIdentifier:(id)arg1 resultCount:(NSUInteger)arg2 ;
+(void)_processContextTitleFootnote:(id)arg0 ;
-(id)_createSectionsFromServerResults:(id)arg0 ;
-(id)_replaceMissingWithError:(id)arg0 ;
-(id)createSectionsFromServerResults:(id)arg0 ;
-(id)init;
-(id)initWithTopics:(id)arg0 scores:(id)arg1 sections:(id)arg2 ;
-(void)dealloc;


@end


#endif