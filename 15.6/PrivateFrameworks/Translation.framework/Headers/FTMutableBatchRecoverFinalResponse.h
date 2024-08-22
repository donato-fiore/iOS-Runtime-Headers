// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEBATCHRECOVERFINALRESPONSE_H
#define FTMUTABLEBATCHRECOVERFINALRESPONSE_H

@class NSString;


#import "FTBatchRecoverFinalResponse.h"

@interface FTMutableBatchRecoverFinalResponse : FTBatchRecoverFinalResponse

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