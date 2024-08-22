// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MMMARKDOWN_H
#define MMMARKDOWN_H


#import <Foundation/Foundation.h>


@interface MMMarkdown : NSObject



+(id)HTMLStringWithMarkdown:(id)arg0 error:(*id)arg1 ;
+(id)HTMLStringWithMarkdown:(id)arg0 extensions:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)HTMLStringWithMarkdown:(id)arg0 extensions:(NSUInteger)arg1 fromSelector:(SEL)arg2 error:(*id)arg3 ;


@end


#endif