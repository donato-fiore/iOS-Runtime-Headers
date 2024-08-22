// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDEBUGDICTIONARYDIAGNOSTICSSERVICE_H
#define PXDEBUGDICTIONARYDIAGNOSTICSSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXDebugDictionaryDiagnosticsService : PXDiagnosticsService



-(BOOL)canProvideConsoleDescription;
-(BOOL)canProvideContextualViewController;
-(id)_debugDictionary;
-(id)consoleDescription;
-(id)contextualViewController;
-(id)title;


@end


#endif