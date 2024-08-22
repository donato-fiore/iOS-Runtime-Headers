// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDIAGNOSTICSEVENT_H
#define WFDIAGNOSTICSEVENT_H

@class NSString, NSDictionary;
@protocol WFUIEvent;

#import <Foundation/Foundation.h>


@interface WFDiagnosticsEvent : NSObject <WFUIEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *eventDictionary; // ivar: _eventDictionary
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_testTypeToString:(NSInteger)arg0 ;
-(id)initWithDiagnosticsEventType:(NSInteger)arg0 didPassTest:(BOOL)arg1 failedTests:(id)arg2 ;
-(id)metric;
-(unsigned int)metricIdentifier;


@end


#endif