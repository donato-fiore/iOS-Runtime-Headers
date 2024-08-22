// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNMOCKAPITRIAGELOGGER_H
#define CNMOCKAPITRIAGELOGGER_H

@class NSString;
@protocol CNAPITriageLogger;

#import <Foundation/Foundation.h>


@interface CNMockAPITriageLogger : NSObject <CNAPITriageLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)clientStoppedEnumerationForRequest:(id)arg0 ;
-(void)didExecuteFetchRequest:(id)arg0 duration:(CGFloat)arg1 ;
-(void)didReturnAllResultsForContactFetchRequest:(id)arg0 ;
-(void)request:(id)arg0 containsContact:(id)arg1 ;
-(void)request:(id)arg0 encounteredError:(id)arg1 ;
-(void)request:(id)arg0 spentTimeInClientCode:(CGFloat)arg1 ;
-(void)request:(id)arg0 willReturnAnchor:(id)arg1 ;
-(void)willExecuteFetchRequest:(id)arg0 ;


@end


#endif