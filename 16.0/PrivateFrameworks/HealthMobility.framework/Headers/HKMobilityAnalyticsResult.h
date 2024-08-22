// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMOBILITYANALYTICSRESULT_H
#define HKMOBILITYANALYTICSRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface HKMobilityAnalyticsResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSUInteger status; // ivar: _status


+(id)resultWithStatus:(NSUInteger)arg0 error:(id)arg1 ;
-(id)initWithStatus:(NSUInteger)arg0 error:(id)arg1 ;


@end


#endif