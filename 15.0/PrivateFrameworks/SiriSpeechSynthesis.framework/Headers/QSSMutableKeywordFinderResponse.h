// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEKEYWORDFINDERRESPONSE_H
#define QSSMUTABLEKEYWORDFINDERRESPONSE_H

@class NSString, NSArray;


#import "QSSKeywordFinderResponse.h"
#import "QSSRecognitionSausage.h"

@interface QSSMutableKeywordFinderResponse : QSSKeywordFinderResponse

@property (copy, nonatomic) QSSRecognitionSausage *corrected_sausage;
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