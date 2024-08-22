// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLECORRECTIONSVALIDATORREQUEST_H
#define QSSMUTABLECORRECTIONSVALIDATORREQUEST_H

@class NSString;


#import "QSSCorrectionsValidatorRequest.h"
#import "QSSRecognitionResult.h"

@interface QSSMutableCorrectionsValidatorRequest : QSSCorrectionsValidatorRequest

@property (copy, nonatomic) NSString *corrected_utterance;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *original_utterance;
@property (copy, nonatomic) QSSRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif