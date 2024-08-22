// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGCONTEXTKITRESULTCONTAINER_H
#define SGCONTEXTKITRESULTCONTAINER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SGContextKitResultContainer : NSObject

@property (retain, nonatomic) NSArray *namedEntities; // ivar: _namedEntities
@property (retain, nonatomic) NSArray *topics; // ivar: _topics
@property (retain, nonatomic) NSArray *topicsExactMatchesInSourceText; // ivar: _topicsExactMatchesInSourceText


-(id)initWithTopics:(id)arg0 namedEntities:(id)arg1 topicsExactMatchesInSourceText:(id)arg2 ;


@end


#endif