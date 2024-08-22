// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSIRIPLISTDUMPER_H
#define MTSIRIPLISTDUMPER_H


#import <Foundation/Foundation.h>

#import "_TtC18PodcastsFoundation11SiriDonator.h"

@interface MTSiriPlistDumper : NSObject

@property (readonly, retain, nonatomic) _TtC18PodcastsFoundation11SiriDonator *siriDonator; // ivar: _siriDonator


-(id)_childFromPlistAtIndex:(NSInteger)arg0 plistArray:(id)arg1 ;
-(id)createDiffWithAddedPodcasts:(id)arg0 addedStations:(id)arg1 removedPodcasts:(id)arg2 removedStations:(id)arg3 ;
-(id)initWithAccountController:(id)arg0 backgroundTaskManager:(id)arg1 ;
-(id)subtractDictionary:(id)arg0 fromDictionary:(id)arg1 uniqueKey:(id)arg2 ;
-(void)dumpPlist;
-(void)writeDiffs:(id)arg0 stationItems:(id)arg1 existingPodcastItems:(id)arg2 existingStationItems:(id)arg3 ;


@end


#endif