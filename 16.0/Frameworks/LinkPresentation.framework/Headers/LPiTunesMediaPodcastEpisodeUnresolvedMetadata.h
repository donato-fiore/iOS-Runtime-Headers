// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPITUNESMEDIAPODCASTEPISODEUNRESOLVEDMETADATA_H
#define LPITUNESMEDIAPODCASTEPISODEUNRESOLVEDMETADATA_H

@class NSString, NSArray;
@protocol LPiTunesMediaUnresolvedMetadata;

#import <Foundation/Foundation.h>

#import "LPiTunesMediaAsset.h"

@interface LPiTunesMediaPodcastEpisodeUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>



@property (copy, nonatomic) NSString *artist; // ivar: _artist
@property (retain, nonatomic) LPiTunesMediaAsset *artwork; // ivar: _artwork
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *episodeName; // ivar: _episodeName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *offers; // ivar: _offers
@property (copy, nonatomic) NSString *podcastName; // ivar: _podcastName
@property (copy, nonatomic) NSString *releaseDate; // ivar: _releaseDate
@property (copy, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (copy, nonatomic) NSString *storeIdentifier; // ivar: _storeIdentifier
@property (readonly) Class superclass;


-(id)assetsToFetch;
-(id)resolve;


@end


#endif