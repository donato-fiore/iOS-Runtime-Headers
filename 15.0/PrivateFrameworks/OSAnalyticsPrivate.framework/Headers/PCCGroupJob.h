// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCCGROUPJOB_H
#define PCCGROUPJOB_H

@class NSMutableArray, NSDictionary, NSString;


#import "PCCJob.h"

@interface PCCGroupJob : PCCJob {
    NSMutableArray *_log_sets;
    NSDictionary *_content;
    NSString *_group_type;
    unsigned int _total_count;
    unsigned int _rejected_count;
    unsigned int _success_count;
    unsigned int _error_count;
    unsigned int _consecutive_error_count;
}




-(id)description;
-(id)initWithID:(id)arg0 forTarget:(id)arg1 options:(id)arg2 ;
-(id)result;
-(id)type;
-(void)prepareNext;
-(void)registerResult:(BOOL)arg0 error:(id)arg1 ;


@end


#endif