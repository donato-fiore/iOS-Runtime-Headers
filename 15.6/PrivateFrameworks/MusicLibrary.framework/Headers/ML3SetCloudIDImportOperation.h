// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3SETCLOUDIDIMPORTOPERATION_H
#define ML3SETCLOUDIDIMPORTOPERATION_H

@class NSArray;


#import "ML3ImportOperation.h"

@interface ML3SetCloudIDImportOperation : ML3ImportOperation {
    NSArray *_trackInfo;
    NSArray *_playlistInfo;
}




-(BOOL)_importPlaylistsUsingImportSession:(*void)arg0 ;
-(BOOL)_importTracksUsingImportSession:(*void)arg0 ;
-(BOOL)_performImportWithTransaction:(id)arg0 ;
-(NSUInteger)importSource;
-(void)main;


@end


#endif