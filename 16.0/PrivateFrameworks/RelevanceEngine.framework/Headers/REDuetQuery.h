// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REDUETQUERY_H
#define REDUETQUERY_H

@class _DKQuery;

#import <Foundation/Foundation.h>


@interface REDuetQuery : NSObject

@property (nonatomic) NSInteger offset;
@property (retain, nonatomic) _DKQuery *query; // ivar: _query
@property (copy, nonatomic) id *transformBlock; // ivar: _transformBlock




@end


#endif