// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADDIAGNOSTICSDIAGNOSTICDATABASECOLLECTOR_H
#define CADDIAGNOSTICSDIAGNOSTICDATABASECOLLECTOR_H

@class NSURL, NSString;
@protocol CADDiagnosticLogCollector;

#import <Foundation/Foundation.h>


@interface CADDiagnosticsDiagnosticDatabaseCollector : NSObject <CADDiagnosticLogCollector>

 {
    NSURL *_outputURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)collectDiagnosticsDatabase:(id)arg0 ;
-(void)collect:(id)arg0 ;
-(void)determineExpectedOutputFiles:(id)arg0 ;


@end


#endif