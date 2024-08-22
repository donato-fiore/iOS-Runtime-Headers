// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEPOSTITNHAMMERREQUEST_H
#define QSSMUTABLEPOSTITNHAMMERREQUEST_H

@class NSString, NSArray;


#import "QSSPostItnHammerRequest.h"

@interface QSSMutablePostItnHammerRequest : QSSPostItnHammerRequest

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *post_itn_string;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif