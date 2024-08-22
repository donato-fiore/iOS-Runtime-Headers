// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDPROACTIVEENTRY_H
#define CHDPROACTIVEENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface CHDProactiveEntry : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) BOOL hasRelevance; // ivar: _hasRelevance
@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 score:(CGFloat)arg1 duration:(CGFloat)arg2 ;


@end


#endif