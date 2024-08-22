// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMTTOKENIZER_H
#define EMTTOKENIZER_H

@class NSLocale;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_EARFormatter.h"

@interface EMTTokenizer : NSObject {
    _EARFormatter *_formatter;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NSLocale *outputLocale; // ivar: _outputLocale


-(id)format:(id)arg0 ;
-(id)format:(id)arg0 preToPostItnMap:(id)arg1 ;
-(id)initWithModelURL:(id)arg0 ;


@end


#endif