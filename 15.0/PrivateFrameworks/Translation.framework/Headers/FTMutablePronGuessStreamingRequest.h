// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEPRONGUESSSTREAMINGREQUEST_H
#define FTMUTABLEPRONGUESSSTREAMINGREQUEST_H



#import "FTPronGuessStreamingRequest.h"
#import "FTAudioPacket.h"
#import "FTCancelRequest.h"
#import "FTFinishAudio.h"
#import "FTStartPronGuessRequest.h"

@interface FTMutablePronGuessStreamingRequest : FTPronGuessStreamingRequest

@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTCancelRequest *contentAsFTCancelRequest;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif