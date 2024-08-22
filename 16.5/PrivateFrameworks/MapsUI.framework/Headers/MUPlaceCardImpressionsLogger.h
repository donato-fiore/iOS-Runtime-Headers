// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACECARDIMPRESSIONSLOGGER_H
#define MUPLACECARDIMPRESSIONSLOGGER_H

@class NSString;
@protocol MUImpressionsLogging, OS_dispatch_queue;


#import "MUImpressionsLogger.h"

@interface MUPlaceCardImpressionsLogger : MUImpressionsLogger <MUImpressionsLogging>

 {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)logImpressionElementDidEnter:(id)arg0 onDate:(id)arg1 ;
-(void)logImpressionElementDidExit:(id)arg0 usingEnterDate:(id)arg1 exitDate:(id)arg2 ;


@end


#endif