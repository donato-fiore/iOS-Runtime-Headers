// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKSEARCH_H
#define TSKSEARCH_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSKSearch : NSObject

@property (copy, nonatomic) id *hitBlock; // ivar: _hitBlock
@property (nonatomic) BOOL isComplete; // ivar: _isComplete
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSString *string; // ivar: _string


-(id)initWithString:(id)arg0 options:(NSUInteger)arg1 hitBlock:(id)arg2 ;


@end


#endif