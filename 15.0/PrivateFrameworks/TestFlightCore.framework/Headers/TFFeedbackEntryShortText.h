// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFFEEDBACKENTRYSHORTTEXT_H
#define TFFEEDBACKENTRYSHORTTEXT_H

@class NSString;


#import "TFFeedbackEntry.h"

@interface TFFeedbackEntryShortText : TFFeedbackEntry

@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) NSString *placeholder; // ivar: _placeholder


-(id)initWithIdentifier:(id)arg0 title:(id)arg1 placeholder:(id)arg2 contentType:(NSUInteger)arg3 ;


@end


#endif