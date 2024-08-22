// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEKEYWORDFINDERRESPONSE_H
#define FTMUTABLEKEYWORDFINDERRESPONSE_H

@class NSString, NSArray;


#import "FTKeywordFinderResponse.h"
#import "FTRecognitionSausage.h"

@interface FTMutableKeywordFinderResponse : FTKeywordFinderResponse

@property (copy, nonatomic) FTRecognitionSausage *corrected_sausage;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *n_best_list;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif