// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEITNREQUEST_H
#define FTMUTABLEITNREQUEST_H

@class NSString, NSArray;


#import "FTItnRequest.h"

@interface FTMutableItnRequest : FTItnRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *words_list;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif