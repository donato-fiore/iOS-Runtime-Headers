// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPNOWPLAYINGINFOLYRICSITEM_H
#define MPNOWPLAYINGINFOLYRICSITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MPNowPlayingInfoLyricsItemToken.h"

@interface MPNowPlayingInfoLyricsItem : NSObject

@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) *void mediaRemoteLyricsItem; // ivar: _mediaRemoteLyricsItem
@property (readonly, nonatomic) MPNowPlayingInfoLyricsItemToken *token;
@property (readonly, nonatomic) BOOL userProvided;


-(id)initWithLyrics:(id)arg0 userProvided:(BOOL)arg1 ;
-(id)initWithLyrics:(id)arg0 userProvided:(BOOL)arg1 token:(id)arg2 ;
-(id)initWithMediaRemoteLyricsItem:(*void)arg0 ;
-(void)dealloc;


@end


#endif