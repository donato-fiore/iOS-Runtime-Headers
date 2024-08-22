// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDAUDIOANALYTICSRESULT_H
#define HDAUDIOANALYTICSRESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface HDAudioAnalyticsResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger status; // ivar: _status


-(id)initWithStatus:(NSInteger)arg0 error:(id)arg1 ;


@end


#endif