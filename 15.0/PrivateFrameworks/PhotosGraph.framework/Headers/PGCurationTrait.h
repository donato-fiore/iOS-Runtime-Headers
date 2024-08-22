// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCURATIONTRAIT_H
#define PGCURATIONTRAIT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGCurationTrait : NSObject

@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (nonatomic) CGFloat minimumScore; // ivar: _minimumScore
@property (readonly) NSString *niceDescription;


-(id)debugDescription;
-(id)init;


@end


#endif