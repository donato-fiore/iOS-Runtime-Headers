// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLIBRARYQUERY_H
#define MTLIBRARYQUERY_H

@class NSPredicate, NSArray;

#import <Foundation/Foundation.h>


@interface MTLibraryQuery : NSObject

@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) NSPredicate *episodePredicate; // ivar: _episodePredicate
@property (retain, nonatomic) NSArray *episodeResults; // ivar: _episodeResults
@property (retain, nonatomic) NSArray *episodeSortDescriptors; // ivar: _episodeSortDescriptors
@property (nonatomic) NSInteger fetchLimit; // ivar: _fetchLimit
@property (retain, nonatomic) NSPredicate *podcastPredicate; // ivar: _podcastPredicate
@property (retain, nonatomic) NSArray *podcastResults; // ivar: _podcastResults
@property (retain, nonatomic) NSArray *podcastSortDescriptors; // ivar: _podcastSortDescriptors


-(id)init;
-(void)runQuery;
-(void)runQueryInContext:(id)arg0 ;
-(void)runQueryWithPodcastPredicate:(id)arg0 episodePredicate:(id)arg1 ;


@end


#endif