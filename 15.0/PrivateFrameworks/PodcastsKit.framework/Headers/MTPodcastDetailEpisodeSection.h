// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPODCASTDETAILEPISODESECTION_H
#define MTPODCASTDETAILEPISODESECTION_H

@class NSString, NSPredicate, NSArray;
@protocol NSFetchedResultsControllerDelegate, MTPodcastDetailEpisodeSectionDelegate, MTFetchedResultsControllerProtocol;

#import <Foundation/Foundation.h>


@interface MTPodcastDetailEpisodeSection : NSObject <NSFetchedResultsControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MTPodcastDetailEpisodeSectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<MTFetchedResultsControllerProtocol> *frc; // ivar: _frc
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) NSUInteger sectionType; // ivar: _sectionType
@property (nonatomic) BOOL showTitleWithNoEpisodes; // ivar: _showTitleWithNoEpisodes
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)dependentPropertyKeys;
-(NSUInteger)indexOfEpisode:(id)arg0 ;
-(id)episodes;
-(void)controller:(id)arg0 didChangeObject:(id)arg1 atIndexPath:(id)arg2 forChangeType:(NSUInteger)arg3 newIndexPath:(id)arg4 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)controllerWillChangeContent:(id)arg0 ;
-(void)initializeFrc;
-(void)loadData;


@end


#endif