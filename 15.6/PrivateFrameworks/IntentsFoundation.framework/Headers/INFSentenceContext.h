// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INFSENTENCECONTEXT_H
#define INFSENTENCECONTEXT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface INFSentenceContext : NSObject

@property (nonatomic) NSUInteger gender; // ivar: _gender
@property (copy, nonatomic) NSNumber *number; // ivar: _number


+(id)sentenceContext;
-(id)combinedWithContext:(id)arg0 ;


@end


#endif