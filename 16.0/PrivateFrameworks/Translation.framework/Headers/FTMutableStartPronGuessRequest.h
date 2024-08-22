// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESTARTPRONGUESSREQUEST_H
#define FTMUTABLESTARTPRONGUESSREQUEST_H

@class NSString;


#import "FTStartPronGuessRequest.h"

@interface FTMutableStartPronGuessRequest : FTStartPronGuessRequest

@property (nonatomic) NSInteger codec;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif