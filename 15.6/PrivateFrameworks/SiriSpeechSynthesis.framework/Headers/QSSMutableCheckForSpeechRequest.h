// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLECHECKFORSPEECHREQUEST_H
#define QSSMUTABLECHECKFORSPEECHREQUEST_H



#import "QSSCheckForSpeechRequest.h"

@interface QSSMutableCheckForSpeechRequest : QSSCheckForSpeechRequest

@property (nonatomic) NSInteger end_speech_time;
@property (nonatomic) NSInteger start_speech_time;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif