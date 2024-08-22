// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3STOREIMPORTOPERATION_H
#define ML3STOREIMPORTOPERATION_H



#import "ML3ImportOperation.h"
#import "ML3StoreItemTrackData.h"
#import "ML3StoreItemPlaylistData.h"

@interface ML3StoreImportOperation : ML3ImportOperation {
    ML3StoreItemTrackData *_trackData;
    ML3StoreItemPlaylistData *_playlistData;
}




-(BOOL)_importPlaylistsUsingImportSession:(*void)arg0 ;
-(BOOL)_importTracksUsingImportSession:(*void)arg0 ;
-(BOOL)_performImportWithTransaction:(id)arg0 ;
-(NSUInteger)importSource;
-(void)main;


@end


#endif