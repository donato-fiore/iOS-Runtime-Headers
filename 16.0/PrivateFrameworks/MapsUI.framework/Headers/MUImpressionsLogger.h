// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIMPRESSIONSLOGGER_H
#define MUIMPRESSIONSLOGGER_H

@class NSString;
@protocol MUImpressionsLogging;

#import <Foundation/Foundation.h>


@interface MUImpressionsLogger : NSObject <MUImpressionsLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)logImpressionElementDidEnter:(id)arg0 onDate:(id)arg1 ;
-(void)logImpressionElementDidExit:(id)arg0 usingEnterDate:(id)arg1 exitDate:(id)arg2 ;


@end


#endif