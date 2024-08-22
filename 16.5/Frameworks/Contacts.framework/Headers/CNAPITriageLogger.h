// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAPITRIAGELOGGER_H
#define CNAPITRIAGELOGGER_H

@class NSString;
@protocol CNAPITriageLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface CNAPITriageLogger : NSObject <CNAPITriageLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


+(id)threadEntryPoint;
+(void)setThreadEntryPoint:(SEL)arg0 ;
-(id)init;
-(void)clientStoppedEnumerationForRequest:(id)arg0 ;
-(void)didExecuteFetchRequest:(id)arg0 duration:(CGFloat)arg1 ;
-(void)didReturnAllResultsForContactFetchRequest:(id)arg0 ;
-(void)request:(id)arg0 containsContact:(id)arg1 ;
-(void)request:(id)arg0 encounteredError:(id)arg1 ;
-(void)request:(id)arg0 failedWithError:(id)arg1 ;
-(void)request:(id)arg0 spentTimeInClientCode:(CGFloat)arg1 ;
-(void)request:(id)arg0 willReturnAnchor:(id)arg1 ;
-(void)willExecuteFetchRequest:(id)arg0 ;


@end


#endif