// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDPERSONALIZINGSESSION_H
#define FCFEEDPERSONALIZINGSESSION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FCDateRange.h"

@interface FCFeedPersonalizingSession : NSObject

@property (retain, nonatomic) FCDateRange *dateRange; // ivar: _dateRange
@property (nonatomic) NSInteger feedType; // ivar: _feedType
@property (nonatomic) NSUInteger fixedArticleCount; // ivar: _fixedArticleCount
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID




@end


#endif