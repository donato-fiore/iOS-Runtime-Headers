// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEPOSTITNHAMMERRESPONSE_H
#define FTMUTABLEPOSTITNHAMMERRESPONSE_H

@class NSString, NSArray;


#import "FTPostItnHammerResponse.h"

@interface FTMutablePostItnHammerResponse : FTPostItnHammerResponse

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