// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSAWDLOGGER_H
#define IDSAWDLOGGER_H

@class NSString;
@protocol CUTMetricLogger;

#import <Foundation/Foundation.h>


@interface IDSAWDLogger : NSObject <CUTMetricLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logger;
-(void)logMetric:(id)arg0 ;


@end


#endif