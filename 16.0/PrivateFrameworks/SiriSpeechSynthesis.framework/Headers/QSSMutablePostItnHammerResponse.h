// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLEPOSTITNHAMMERRESPONSE_H
#define QSSMUTABLEPOSTITNHAMMERRESPONSE_H

@class NSString, NSArray;


#import "QSSPostItnHammerResponse.h"

@interface QSSMutablePostItnHammerResponse : QSSPostItnHammerResponse

@property (copy, nonatomic) NSString *language;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif