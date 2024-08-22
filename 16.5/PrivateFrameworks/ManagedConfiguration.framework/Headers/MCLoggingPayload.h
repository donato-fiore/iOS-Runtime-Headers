// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCLOGGINGPAYLOAD_H
#define MCLOGGINGPAYLOAD_H

@class NSDictionary;


#import "MCPayload.h"

@interface MCLoggingPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *loggingPayload; // ivar: _loggingPayload


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isAllowedToWriteLogging;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)stubDictionary;
-(id)title;


@end


#endif