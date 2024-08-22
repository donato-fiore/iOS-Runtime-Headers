// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDIAGNOSTICS_H
#define PLDIAGNOSTICS_H


#import <Foundation/Foundation.h>


@interface PLDiagnostics : NSObject



+(BOOL)shouldSuppressRadarUserNotificationWithMessage:(id)arg0 radarTitle:(id)arg1 ;
+(NSUInteger)addOSStateHandlerWithTitle:(id)arg0 queue:(id)arg1 propertyListHandler:(id)arg2 ;
+(id)_memoriesRelatedOutputPathBaseDirectoryWithPathManager:(id)arg0 ;
+(id)createOrEmptyMemoriesRelatedSnapshotOutputFolderWithPathManager:(id)arg0 ;
+(id)diagnosticsURLs;
+(id)excludingNameExpression;
+(id)logDirectoryURL;
+(id)matchingNameExpression;
+(id)memoriesAndRelatedDiagnosticsOutputURLWithPathManager:(id)arg0 ;
+(void)collectMomentsStatWithLibraryContext:(id)arg0 completionBlock:(id)arg1 ;
+(void)enumerateDiagnosticsURLsIncludingPropertyiesForKeys:(id)arg0 handler:(id)arg1 ;
+(void)fileRadarUserNotificationWithHeader:(id)arg0 message:(id)arg1 radarTitle:(id)arg2 radarDescription:(id)arg3 ;
+(void)tapToRadarWithTitle:(id)arg0 description:(id)arg1 ;


@end


#endif