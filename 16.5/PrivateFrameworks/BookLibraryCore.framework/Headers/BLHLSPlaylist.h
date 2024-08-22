// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLHLSPLAYLIST_H
#define BLHLSPLAYLIST_H

@class NSString, NSArray, NSSet, NSUUID, NSMutableSet;
@protocol BLM3U8ParserDelegate;

#import <Foundation/Foundation.h>

#import "BLHLSPlaylistState.h"

@interface BLHLSPlaylist : NSObject <BLM3U8ParserDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *groups; // ivar: _groups
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreSegments; // ivar: _ignoreSegments
@property (nonatomic) BOOL independentSegments; // ivar: _independentSegments
@property (readonly, nonatomic) NSSet *keys;
@property (retain, nonatomic) NSUUID *racGUID; // ivar: _racGUID
@property (retain, nonatomic) NSArray *requestedBitrates; // ivar: _requestedBitrates
@property (retain, nonatomic) NSArray *segments; // ivar: _segments
@property (retain, nonatomic) BLHLSPlaylistState *state; // ivar: _state
@property (retain, nonatomic) NSArray *streamInfs; // ivar: _streamInfs
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *uniqueKeys; // ivar: _uniqueKeys


+(BOOL)_rewritePlaylistWithParser:(id)arg0 toURL:(id)arg1 requestedBitrates:(id)arg2 error:(*id)arg3 ;
+(BOOL)rewritePlaylistData:(id)arg0 toURL:(id)arg1 requestedBitrates:(id)arg2 error:(*id)arg3 ;
+(BOOL)rewritePlaylistURL:(id)arg0 toURL:(id)arg1 requestedBitrates:(id)arg2 error:(*id)arg3 ;
+(id)_playlistUsingParser:(id)arg0 ignoreSegments:(BOOL)arg1 error:(*id)arg2 ;
+(id)playlistParsingData:(id)arg0 error:(*id)arg1 ;
+(id)playlistParsingURL:(id)arg0 error:(*id)arg1 ;
+(id)playlistParsingURL:(id)arg0 ignoreSegments:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_parseUsingParser:(id)arg0 error:(*id)arg1 ;
-(BOOL)parserShouldCollectLine:(id)arg0 ;
-(id)initWithRequestedBitrates:(id)arg0 ;
-(void)parser:(id)arg0 lineIsComment:(id)arg1 ;
-(void)parser:(id)arg0 lineIsTag:(id)arg1 value:(id)arg2 attributeList:(id)arg3 ;
-(void)parser:(id)arg0 lineIsURL:(id)arg1 ;


@end


#endif