// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3STOREITEMARTISTDATA_H
#define ML3STOREITEMARTISTDATA_H

@class NSArray, NSData, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface ML3StoreItemArtistData : NSObject {
    NSArray *_lookupItems;
    NSData *_artistData;
    NSArray *_itemArtistProperties;
    NSArray *_albumArtistProperties;
    NSDateFormatter *_storePlatformDateFormatter;
}


@property (readonly, nonatomic) NSUInteger artistCount;


-(id)_storeItemArtistsImportPropertiesForAlbumArtist;
-(id)_storeItemArtistsImportPropertiesForItemArtist;
-(id)_storeItemArtistsImportPropertiesFromLookupItems:(id)arg0 itemArtistImport:(BOOL)arg1 ;
-(id)artistData;
-(id)initWithArtistData:(id)arg0 ;
-(id)initWithLookupItems:(id)arg0 ;
-(id)parsedStoreItemArtistsImportPropertiesForAlbumArtists;
-(id)parsedStoreItemArtistsImportPropertiesForItemArtists;


@end


#endif