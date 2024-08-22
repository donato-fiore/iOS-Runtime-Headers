// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CELLULARDATADIAGNOSTICSSUITECONTROLLER_H
#define CELLULARDATADIAGNOSTICSSUITECONTROLLER_H

@class DKDiagnosticController;


#import "SpeedTestConfig.h"

@interface CellularDataDiagnosticsSuiteController : DKDiagnosticController {
    SpeedTestConfig *cellularTestStartRef;
}




-(void)start;


@end


#endif