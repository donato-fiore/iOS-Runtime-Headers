// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCONTEXTMEDIASUGGESTIONPRODUCER_H
#define ATXCONTEXTMEDIASUGGESTIONPRODUCER_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface ATXContextMediaSuggestionProducer : NSObject {
    NSInteger _mediaType;
    NSInteger _mediaSubType;
    NSString *_trackName;
    NSInteger _trackAdamId;
    NSString *_artistName;
    NSInteger _artistAdamId;
    NSString *_albumName;
    NSInteger _albumAdamId;
    NSString *_searchString;
    NSString *_destDisplayName;
    NSDate *_expirationDate;
}




+(id)new;
-(id)init;
-(id)initWithMediaRemoteContentItem:(id)arg0 destDisplayName:(id)arg1 expirationDate:(id)arg2 ;
-(id)suggestionForAlbumWithReason:(NSUInteger)arg0 score:(CGFloat)arg1 ;
-(id)suggestionForArtistWithReason:(NSUInteger)arg0 score:(CGFloat)arg1 ;
-(id)suggestionForTrackWithReason:(NSUInteger)arg0 score:(CGFloat)arg1 ;


@end


#endif