// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLESTARTPRONGUESSREQUEST_H
#define QSSMUTABLESTARTPRONGUESSREQUEST_H

@class NSString;


#import "QSSStartPronGuessRequest.h"

@interface QSSMutableStartPronGuessRequest : QSSStartPronGuessRequest

@property (nonatomic) NSInteger codec;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif