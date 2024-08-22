// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERACLIPVIDEOHLSPLAYLISTGENERATOR_H
#define HMCAMERACLIPVIDEOHLSPLAYLISTGENERATOR_H

@class NSData, NSMutableString, NSURL;

#import <Foundation/Foundation.h>


@interface HMCameraClipVideoHLSPlaylistGenerator : NSObject

@property (readonly, copy) NSData *hlsPlaylist;
@property (readonly) NSMutableString *hlsPlaylistString; // ivar: _hlsPlaylistString
@property (readonly, copy) NSURL *url; // ivar: _url


+(id)_hlsPlaylistEncryptionMethodNameForScheme:(NSUInteger)arg0 ;
-(id)initWithClip:(id)arg0 url:(id)arg1 ;
-(void)addSegment:(id)arg0 ;
-(void)addSegments:(id)arg0 ;
-(void)finish;


@end


#endif