// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHMEDIALIBRARYTRACKUPDATE_H
#define SHMEDIALIBRARYTRACKUPDATE_H


#import <Foundation/Foundation.h>

#import "SHLibraryTrack.h"
#import "SHMediaItem.h"

@interface SHMediaLibraryTrackUpdate : NSObject

@property (readonly, nonatomic) SHLibraryTrack *trackToUpdate; // ivar: _trackToUpdate
@property (readonly, nonatomic) SHMediaItem *updatedMediaItem; // ivar: _updatedMediaItem


+(id)updateForTrack:(id)arg0 withMediaItem:(id)arg1 ;
-(id)initWithTrackToUpdate:(id)arg0 updatedMediaItem:(id)arg1 ;


@end


#endif