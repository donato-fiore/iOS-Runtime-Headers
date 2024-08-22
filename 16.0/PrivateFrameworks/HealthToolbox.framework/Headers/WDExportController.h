// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDEXPORTCONTROLLER_H
#define WDEXPORTCONTROLLER_H

@class NSURL, UIViewController;

#import <Foundation/Foundation.h>

#import "WDExportManager.h"

@interface WDExportController : NSObject {
    WDExportManager *_exportManager;
    NSUInteger _backgroundTask;
    NSUInteger _exportResult;
    NSURL *_exportFileURL;
    BOOL _isExporting;
    UIViewController *_exportPresentingViewController;
}




-(BOOL)exportInProgress;
-(id)initWithProfile:(id)arg0 ;
-(void)_beginExport;
-(void)_cleanUpExport;
-(void)_shareExportFileAndCleanUp;
-(void)verifyExportWithPresentingViewController:(id)arg0 ;


@end


#endif