// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSUMATCHERBUILDER_H
#define SSUMATCHERBUILDER_H

@class SNLPSSUMatcher;

#import <Foundation/Foundation.h>


@interface SSUMatcherBuilder : NSObject {
    SNLPSSUMatcher *__matcherPtr;
}




+(id)buildMatcher:(id)arg0 error:(*id)arg1 ;
+(id)sharedBuilder;
-(BOOL)hasMatcher;
-(id)_init;
// -(id)getMatcherRef:(id)arg0 error:(unk)arg1  ;


@end


#endif