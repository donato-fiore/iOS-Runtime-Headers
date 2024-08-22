// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMETRICSREPORTERSPY_H
#define CNMETRICSREPORTERSPY_H

@class NSMutableArray, NSString, NSArray;
@protocol CNMetricsReporter;

#import <Foundation/Foundation.h>


@interface CNMetricsReporterSpy : NSObject <CNMetricsReporter>

 {
    NSMutableArray *_entries;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *events;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)clearEvents;
-(void)logSimpleEvent:(id)arg0 forApplication:(id)arg1 andLog:(BOOL)arg2 ;
-(void)sendDictionary:(id)arg0 forEvent:(id)arg1 andLog:(BOOL)arg2 ;


@end


#endif