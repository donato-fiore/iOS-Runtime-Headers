// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEKEYWORDFINDERREQUEST_H
#define FTMUTABLEKEYWORDFINDERREQUEST_H

@class NSArray, NSString;


#import "FTKeywordFinderRequest.h"
#import "FTRecognitionResult.h"

@interface FTMutableKeywordFinderRequest : FTKeywordFinderRequest

@property (nonatomic) BOOL enable_sanitization;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) FTRecognitionResult *recognition_result;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif