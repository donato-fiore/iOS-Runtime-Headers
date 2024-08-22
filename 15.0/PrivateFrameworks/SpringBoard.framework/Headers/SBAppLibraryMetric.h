// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLIBRARYMETRIC_H
#define SBAPPLIBRARYMETRIC_H

@class PETScalarEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBAppLibraryMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    PETScalarEventTracker *_appDownloadSettingsTracker;
    PETScalarEventTracker *_libraryDockSettingsTracker;
    PETScalarEventTracker *_modalLibraryPresentedTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;


@end


#endif