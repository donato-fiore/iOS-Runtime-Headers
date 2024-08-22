// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEPRONGUESSSTREAMINGREQUEST_H
#define QSSMUTABLEPRONGUESSSTREAMINGREQUEST_H



#import "QSSPronGuessStreamingRequest.h"
#import "QSSAudioPacket.h"
#import "QSSCancelRequest.h"
#import "QSSFinishAudio.h"
#import "QSSStartPronGuessRequest.h"

@interface QSSMutablePronGuessStreamingRequest : QSSPronGuessStreamingRequest

@property (copy, nonatomic) QSSAudioPacket *contentAsQSSAudioPacket;
@property (copy, nonatomic) QSSCancelRequest *contentAsQSSCancelRequest;
@property (copy, nonatomic) QSSFinishAudio *contentAsQSSFinishAudio;
@property (copy, nonatomic) QSSStartPronGuessRequest *contentAsQSSStartPronGuessRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif