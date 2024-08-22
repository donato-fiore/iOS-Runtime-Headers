// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADDIAGNOSTICSCALDAVLOGCOLLECTOR_H
#define CADDIAGNOSTICSCALDAVLOGCOLLECTOR_H

@class NSArray, NSString;
@protocol CADDiagnosticLogCollector;

#import <Foundation/Foundation.h>


@interface CADDiagnosticsCalDAVLogCollector : NSObject <CADDiagnosticLogCollector>

 {
    NSArray *_orderedInputURLs;
    NSArray *_orderedOutputURLs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)findAllLogFiles:(id)arg0 ;
-(id)parseFilenameDates:(id)arg0 context:(id)arg1 ;
-(id)sortAndTrimLogFiles:(id)arg0 context:(id)arg1 ;
-(void)collect:(id)arg0 ;
-(void)determineExpectedOutputFiles:(id)arg0 ;


@end


#endif