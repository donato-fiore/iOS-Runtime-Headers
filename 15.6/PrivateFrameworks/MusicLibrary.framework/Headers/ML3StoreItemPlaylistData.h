// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3STOREITEMPLAYLISTDATA_H
#define ML3STOREITEMPLAYLISTDATA_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>


@interface ML3StoreItemPlaylistData : NSObject {
    NSArray *_lookupItems;
    NSData *_playlistData;
    NSArray *_parsedPlaylistsImportProperties;
}


@property (readonly, nonatomic) NSArray *parsedStorePlaylistsImportProperties;
@property (readonly, nonatomic) NSUInteger playlistCount;
@property (readonly, nonatomic) NSData *playlistsData;


-(id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg0 cropStyle:(id)arg1 ;
-(id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg0 ;
-(id)_playlistPropertiesForLookupItems:(id)arg0 ;
-(id)_playlistPropertiesFromPlaylistData:(id)arg0 ;
-(id)initWithLookupItems:(id)arg0 ;
-(id)initWithPlaylistsData:(id)arg0 ;


@end


#endif