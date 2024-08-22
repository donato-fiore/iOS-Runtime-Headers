// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDMESSAGEQUERYPARSEROBJECT_H
#define EDMESSAGEQUERYPARSEROBJECT_H

@class NSPredicate;

#import <Foundation/Foundation.h>


@interface EDMessageQueryParserObject : NSObject

@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSUInteger queryType; // ivar: _queryType


-(id)initWithQueryType:(NSUInteger)arg0 predicate:(id)arg1 ;


@end


#endif