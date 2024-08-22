// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACBUGREPORTER_H
#define CACBUGREPORTER_H

@class SDRDiagnosticReporter;

#import <Foundation/Foundation.h>


@interface CACBugReporter : NSObject

@property (retain) SDRDiagnosticReporter *diagnosticReporter; // ivar: _diagnosticReporter


+(id)sharedReporter;
-(id)init;
-(void)reportIssue:(id)arg0 subtype:(id)arg1 description:(id)arg2 ;
-(void)reportIssue:(id)arg0 subtype:(id)arg1 description:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif