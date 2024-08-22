// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXAPPICONSTATELOGGER_H
#define ATXAPPICONSTATELOGGER_H

@class NSString;
@protocol ATXPeriodicLoggerSource;

#import <Foundation/Foundation.h>


@interface ATXAppIconStateLogger : NSObject <ATXPeriodicLoggerSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getMetrics;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif