// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPODCASTDETAILDATASOURCE_H
#define MTPODCASTDETAILDATASOURCE_H

@class NSString, NSArray;
@protocol MTPodcastDetailEpisodeSectionDelegate, MTPodcastDetailDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTPodcastDetailDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *podcastUuid; // ivar: _podcastUuid
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) NSUInteger selectedTab; // ivar: _selectedTab
@property (nonatomic) BOOL showOnlyRssContent; // ivar: _showOnlyRssContent
@property (readonly) Class superclass;


+(id)predicateForPodcast:(id)arg0 sectionType:(NSUInteger)arg1 ;
+(id)sortDescriptorsForPodcastUuid:(id)arg0 ;
-(NSUInteger)indexForSection:(id)arg0 ;
-(id)createSectionForDarkPlacard;
-(id)createSectionForEmptyOverlay;
-(id)createSectionForFeed;
-(id)createSectionForIsFromiTunesSync;
-(id)createSectionForOtherEpisodes;
-(id)createSectionForPlayedToBeDeleted;
-(id)createSectionForUnplayed;
-(id)feedSections;
-(id)initWithPodcastUuid:(id)arg0 ;
-(id)podcast;
-(id)savedSections;
-(id)unplayedSections;
-(void)episodeSection:(id)arg0 didChangeObject:(id)arg1 atIndex:(NSUInteger)arg2 forChangeType:(NSUInteger)arg3 newIndex:(NSUInteger)arg4 ;
-(void)reloadData;
-(void)sectionDidChangeContent:(id)arg0 ;
-(void)sectionWillChangeContent:(id)arg0 ;


@end


#endif