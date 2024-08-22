// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMUSICPLAYERCONTROLLERNOWPLAYING_H
#define MPMUSICPLAYERCONTROLLERNOWPLAYING_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPNowPlayingInfoAudioFormat.h"
#import "MPMediaItem.h"

@interface MPMusicPlayerControllerNowPlaying : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (readonly, nonatomic) MPNowPlayingInfoAudioFormat *audioFormat; // ivar: _audioFormat
@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, nonatomic) MPMediaItem *item; // ivar: _item
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier


+(BOOL)supportsSecureCoding;
+(id)nowPlayingWithItem:(id)arg0 audioFormat:(id)arg1 itemIdentifier:(id)arg2 artworkIdentifier:(id)arg3 index:(NSInteger)arg4 count:(NSInteger)arg5 ;
+(id)nowPlayingWithItem:(id)arg0 itemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 index:(NSInteger)arg3 count:(NSInteger)arg4 ;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif