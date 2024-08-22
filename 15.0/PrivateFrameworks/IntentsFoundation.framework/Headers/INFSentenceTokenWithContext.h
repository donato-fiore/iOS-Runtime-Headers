// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INFSENTENCETOKENWITHCONTEXT_H
#define INFSENTENCETOKENWITHCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "INFSentenceContext.h"
#import "INFSentenceToken.h"

@interface INFSentenceTokenWithContext : NSObject

@property (retain, nonatomic) INFSentenceContext *context; // ivar: _context
@property (retain, nonatomic) INFSentenceToken *originalToken; // ivar: _originalToken
@property (copy, nonatomic) NSString *placeholderName; // ivar: _placeholderName
@property (nonatomic, getter=isResolved) BOOL resolved; // ivar: _resolved


+(id)sentenceResolvedTokenWithOriginalToken:(id)arg0 placeholderName:(id)arg1 ;
-(id)initWithToken:(id)arg0 variableName:(id)arg1 ;


@end


#endif