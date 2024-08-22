// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLECORRECTIONSVALIDATORRESPONSE_H
#define QSSMUTABLECORRECTIONSVALIDATORRESPONSE_H

@class NSArray, NSString;


#import "QSSCorrectionsValidatorResponse.h"

@interface QSSMutableCorrectionsValidatorResponse : QSSCorrectionsValidatorResponse

@property (copy, nonatomic) NSArray *corrections;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif