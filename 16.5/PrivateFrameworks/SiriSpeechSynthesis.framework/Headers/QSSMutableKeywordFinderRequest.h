// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEKEYWORDFINDERREQUEST_H
#define QSSMUTABLEKEYWORDFINDERREQUEST_H

@class NSArray, NSString;


#import "QSSKeywordFinderRequest.h"
#import "QSSRecognitionResult.h"

@interface QSSMutableKeywordFinderRequest : QSSKeywordFinderRequest

@property (nonatomic) BOOL enable_sanitization;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) QSSRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif