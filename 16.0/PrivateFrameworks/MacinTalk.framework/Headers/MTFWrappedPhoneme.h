// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFWRAPPEDPHONEME_H
#define MTFWRAPPEDPHONEME_H

@class NSString;


#import "MTFWrappedSpeechElement.h"

@interface MTFWrappedPhoneme : MTFWrappedSpeechElement

@property (readonly, nonatomic) NSString *name;


-(struct MTFEPhoneme *)elem;


@end


#endif