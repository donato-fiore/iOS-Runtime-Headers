// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFSEARCHMATCHERCONTEXT_H
#define _MFSEARCHMATCHERCONTEXT_H

@class CPSearchMatcher, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _MFSearchMatcherContext : NSObject

@property (retain, nonatomic) CPSearchMatcher *lastMatcher; // ivar: _lastMatcher
@property (nonatomic) char * lastSearchString; // ivar: _lastSearchString
@property (nonatomic) NSUInteger lastSearchStringLength; // ivar: _lastSearchStringLength
@property (retain, nonatomic) NSMutableDictionary *matchers; // ivar: _matchers


-(void)dealloc;
-(void)flush;


@end


#endif