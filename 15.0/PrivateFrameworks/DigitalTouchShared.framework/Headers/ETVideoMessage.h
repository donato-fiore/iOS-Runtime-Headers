// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETVIDEOMESSAGE_H
#define ETVIDEOMESSAGE_H

@class NSMutableArray, NSURL, NSArray, UIImage;


#import "ETMessage.h"
#import "ETSketchMessage.h"

@interface ETVideoMessage : ETMessage {
    NSMutableArray *_playingMessages;
    CGFloat _compressedTimeTotal;
    CGFloat _compressedTimeLastEventTime;
    CGFloat _messageDuration;
}


@property (readonly, nonatomic) BOOL canCompressTime;
@property (retain, nonatomic) ETSketchMessage *introMessage; // ivar: _introMessage
@property (nonatomic) NSUInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSURL *mediaURL; // ivar: _mediaURL
@property (nonatomic) BOOL pauseTimeCompression; // ivar: _pauseTimeCompression
@property (retain, nonatomic) NSArray *playingMessages;
@property (retain, nonatomic) UIImage *stillImage; // ivar: _stillImage


+(unsigned short)messageType;
-(BOOL)isAnimated;
-(BOOL)shouldLoopDuringPlayback;
-(CGFloat)compressTimeSinceStartOfMessage:(CGFloat)arg0 ;
-(CGFloat)messageDuration;
-(NSUInteger)_mediaTypeFromETPVideoType:(int)arg0 ;
-(id)archiveData;
-(id)init;
-(id)initWithArchiveData:(id)arg0 ;
-(id)messageTypeAsString;
-(int)_etpMediaTypeFromETMediaType:(NSUInteger)arg0 ;


@end


#endif