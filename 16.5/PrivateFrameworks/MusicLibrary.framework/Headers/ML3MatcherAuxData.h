// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3MATCHERAUXDATA_H
#define ML3MATCHERAUXDATA_H

@class CPSearchMatcher;

#import <Foundation/Foundation.h>


@interface ML3MatcherAuxData : NSObject {
    CPSearchMatcher *_searchMatcher;
    char * _searchUTF8String;
}




-(void)dealloc;


@end


#endif