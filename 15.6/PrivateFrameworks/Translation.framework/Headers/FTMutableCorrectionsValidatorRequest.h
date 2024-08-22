// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLECORRECTIONSVALIDATORREQUEST_H
#define FTMUTABLECORRECTIONSVALIDATORREQUEST_H

@class NSString;


#import "FTCorrectionsValidatorRequest.h"
#import "FTRecognitionResult.h"

@interface FTMutableCorrectionsValidatorRequest : FTCorrectionsValidatorRequest

@property (copy, nonatomic) NSString *corrected_utterance;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *original_utterance;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif