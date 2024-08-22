// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3MIGRATIONMISGROUPEDALBUM_H
#define ML3MIGRATIONMISGROUPEDALBUM_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface ML3MigrationMisgroupedAlbum : NSObject {
    NSMutableArray *_misgroupedTracks;
}


@property (readonly, nonatomic) NSInteger albumArtistPID; // ivar: _albumArtistPID
@property (readonly, nonatomic) NSInteger albumPID; // ivar: _albumPID
@property (readonly, nonatomic) NSArray *misgroupedTracks;


-(id)initWithAlbumPID:(NSInteger)arg0 albumArtistPID:(NSInteger)arg1 ;
-(void)addMisgroupedTrack:(id)arg0 ;


@end


#endif