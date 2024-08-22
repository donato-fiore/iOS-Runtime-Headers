// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHMEDIALIBRARYTRACKUPDATE_H
#define SHMEDIALIBRARYTRACKUPDATE_H


#import <Foundation/Foundation.h>

#import "SHMediaLibraryTrack.h"
#import "SHMediaItem.h"

@interface SHMediaLibraryTrackUpdate : NSObject

@property (readonly, nonatomic) SHMediaLibraryTrack *trackToUpdate; // ivar: _trackToUpdate
@property (readonly, nonatomic) SHMediaItem *updatedMediaItem; // ivar: _updatedMediaItem


-(id)initWithTrackToUpdate:(id)arg0 updatedMediaItem:(id)arg1 ;


@end


#endif