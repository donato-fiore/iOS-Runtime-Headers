// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEBATCHRECOVERFINALRESPONSE_H
#define QSSMUTABLEBATCHRECOVERFINALRESPONSE_H

@class NSString;


#import "QSSBatchRecoverFinalResponse.h"

@interface QSSMutableBatchRecoverFinalResponse : QSSBatchRecoverFinalResponse

@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (nonatomic) int num_of_processed;
@property (nonatomic) int num_of_requested;
@property (nonatomic) int num_of_succeeded;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif