// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMUSICPROVIDER_H
#define PMMUSICPROVIDER_H

@class NSString, NSArray, NSDictionary;
@protocol PMEditProviderProtocol, PMEditProviderDelegate;

#import <Foundation/Foundation.h>

#import "VEKSong.h"
#import "VEKProduction.h"

@interface PMMusicProvider : NSObject <PMEditProviderProtocol>



@property (retain, nonatomic) NSString *currentSelectedSectionKey; // ivar: _currentSelectedSectionKey
@property (readonly, nonatomic) VEKSong *currentSong;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMEditProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *featuredSongs; // ivar: _featuredSongs
@property (retain, nonatomic) NSArray *genreSectionKeys; // ivar: _genreSectionKeys
@property (nonatomic) NSUInteger groupingStyle; // ivar: groupingStyle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *moodSectionKeys; // ivar: _moodSectionKeys
@property (retain, nonatomic) VEKProduction *production; // ivar: _production
@property (nonatomic) NSInteger selectedSection; // ivar: _selectedSection
@property (retain, nonatomic) NSDictionary *songsByGenreGroupingType; // ivar: _songsByGenreGroupingType
@property (retain, nonatomic) NSDictionary *songsByMoodGroupingType; // ivar: _songsByMoodGroupingType
@property (readonly) Class superclass;


-(BOOL)genreGroupContainsSongs;
-(NSInteger)numberOfItemsinSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)displayNameForGenreID:(id)arg0 ;
-(id)displayNameForMood:(NSInteger)arg0 ;
-(id)displayNameForSection:(NSInteger)arg0 ;
-(id)indexPathOfSong:(id)arg0 ;
-(id)initWithProduction:(id)arg0 ;
-(id)sectionKeyForIndex:(NSInteger)arg0 ;
-(id)songAtIndex:(NSInteger)arg0 section:(NSInteger)arg1 ;
-(id)songsGroupedByMood;
-(id)sortedGenreIDs;
-(id)sortedMoodIDs;
-(void)clearFeaturedSongs;


@end


#endif