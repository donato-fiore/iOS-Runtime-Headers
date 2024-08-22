// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTSPEAKREQUEST_H
#define _LTSPEAKREQUEST_H

@class LTTranslationRequest, NSString;



@interface _LTSpeakRequest : LTTranslationRequest

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGFloat ttsPlaybackRate; // ivar: _ttsPlaybackRate


-(id)initWithLocalePair:(id)arg0 ;
-(void)_startTranslationWithService:(id)arg0 done:(id)arg1 ;


@end


#endif