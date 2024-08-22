// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPETEVENTTRACKER2LOGGER_H
#define ATXPETEVENTTRACKER2LOGGER_H

@protocol ATXPETEventTracker2Protocol;

#import <Foundation/Foundation.h>


@interface ATXPETEventTracker2Logger : NSObject <ATXPETEventTracker2Protocol>





-(void)logMessage:(id)arg0 ;
-(void)trackDistributionForMessage:(id)arg0 value:(CGFloat)arg1 ;
-(void)trackScalarForMessage:(id)arg0 ;
-(void)trackScalarForMessage:(id)arg0 count:(int)arg1 ;


@end


#endif