// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRITTSAUDIOREQUEST_H
#define SIRITTSAUDIOREQUEST_H

@class NSString;
@protocol SiriTTSAudibleRequestProtocol;


#import "SiriTTSBaseRequest.h"
#import "SiriTTSAudibleContext.h"
#import "SiriTTSAudioData.h"

@interface SiriTTSAudioRequest : SiriTTSBaseRequest <SiriTTSAudibleRequestProtocol>



@property (retain, nonatomic) SiriTTSAudibleContext *audibleContext;
@property (nonatomic, retain) SiriTTSAudibleContext *audibleContext; // ivar: audibleContext
@property (nonatomic, readonly) SiriTTSAudioData *audio; // ivar: audio
@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(BOOL)immediate;
-(id)didStartSpeaking:(SEL)arg0 ;
-(id)init;
-(id)initWithAudio:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)siriRequestId;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDidStartSpeaking:(id)arg0 ;
-(void)setImmediate:(BOOL)arg0 ;
-(void)setSiriRequestId:(id)arg0 ;


@end


#endif