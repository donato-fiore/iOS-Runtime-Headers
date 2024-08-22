// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPLAYMUSICACTIONCONTENT_H
#define WFPLAYMUSICACTIONCONTENT_H

@class MPMediaItemCollection, MPPlaybackArchive, NSArray;

#import <Foundation/Foundation.h>


@interface WFPlayMusicActionContent : NSObject

@property (retain, nonatomic) MPMediaItemCollection *mediaCollection; // ivar: _mediaCollection
@property (retain, nonatomic) MPPlaybackArchive *playbackArchive; // ivar: _playbackArchive
@property (copy, nonatomic) NSArray *storeIDs; // ivar: _storeIDs


-(id)contentDestinationWithError:(*id)arg0 ;
-(id)initWithMediaCollection:(id)arg0 ;
-(id)initWithPlaybackArchive:(id)arg0 ;
-(id)initWithStoreIDs:(id)arg0 ;


@end


#endif